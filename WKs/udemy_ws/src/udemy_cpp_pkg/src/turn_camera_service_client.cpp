#include <iostream>
#include "ros/ros.h"
#include "udemy_cpp_pkg/TurnCamera.h"

#include <opencv/cv.h>
#include <opencv2/core.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/highgui.hpp>
#include <sensor_msgs/image_encodings.h>

using namespace std ; 
using namespace ros ; 
using namespace udemy_cpp_pkg ;  
using namespace cv ; 

int main(int argc , char **argv){

    init(argc , argv , "turn_camera_service_client_node") ; 

    NodeHandle nodehandle ; 
    
    ServiceClient client = nodehandle.serviceClient<TurnCamera>("turn_camera"); 

    TurnCamera turn_camera_srv ; 

    float input_num ; 

    cv_bridge::CvImagePtr cv_ptr ; 

    while (ok()){
        /* code */

        cout << "Enter an angle to turn robot camera : " ; 
        cin >> input_num ; 

        turn_camera_srv.request.deg_turn = input_num ; 

        if (client.call(turn_camera_srv)){

            try{
                cv_ptr = cv_bridge::toCvCopy(turn_camera_srv.response.camera_image , sensor_msgs::image_encodings::BGR8) ; 
                imshow("Robot Camera Image" , cv_ptr->image) ; 
                waitKey(1000) ;
            }catch (cv_bridge::Exception& e){
                ROS_ERROR("cv_bridge exception: %s", e.what());
                return 0 ;        
            }
            
            size_t rows = cv_ptr->image.rows ; 
            size_t cols = cv_ptr->image.cols ;
            
        }else{
            ROS_ERROR("Service Call Failed"); 
            return 1 ; 
        }
        cin.clear() ; 
    }
    return 0 ; 
}