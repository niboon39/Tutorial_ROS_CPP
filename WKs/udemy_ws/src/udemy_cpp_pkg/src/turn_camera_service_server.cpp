#include <iostream>
#include <ros/ros.h>
#include <std_msgs/String.h>

#include "udemy_cpp_pkg/TurnCamera.h"

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>

using namespace std ; 
using namespace ros ;  
using namespace image_transport ; 
using namespace udemy_cpp_pkg ; 

string exe_dir  , ws_dir , image_path; 
const int size = 5  ; 
float availble_angles [size] {-15 , -30 , 0 , 15 , 30} ; 

bool getCameraImage(TurnCamera::Request &req , TurnCamera::Response &res  ){
    float closest_num = availble_angles[0] ; 
    float smallest_angle = req.deg_turn  - availble_angles[0] ; 
    float angle_diff ; 

    for (int i = 0 ; i < size ; i++){
        angle_diff = abs(req.deg_turn - availble_angles[i]) ; 

        if (angle_diff < smallest_angle){
            smallest_angle  = angle_diff ;
            closest_num = availble_angles[i] ; 
        }
    }

    image_path = ws_dir + "src/udemy_cpp_pkg/images/" + to_string( (int)closest_num) + ".png" ; 

    cout << image_path << endl ; 

    cv::Mat image = cv::imread(image_path , 1) ; 

    // sensor_msgs::ImagePtr img_ptr = CvImage(std_msgs::Header() , "brg8" , image).toImageMsg () ; 
    sensor_msgs::ImagePtr img_ptr = cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg();

    res.camera_image = *img_ptr ; 

    return true ; 
}



int main (int argc , char **argv){

    exe_dir = argv[0] ; 
    string::size_type substr_index = exe_dir.find("devel") ; 
    ws_dir = exe_dir.substr(0 , substr_index) ; 

    /* Path of turn_camera */
    cout << "Path : " << exe_dir << endl ; 
    /* Path of workspace */ 
    cout << "Path_ws : " << ws_dir << endl;

    init(argc , argv , "turn_camera_service_server") ; 

    NodeHandle nodehandle ; 

    ServiceServer service = nodehandle.advertiseService("turn_camera", getCameraImage) ;

    ROS_INFO("Turn camera Server Running ... "); 

    spin() ; 

    return 0 ; 
}