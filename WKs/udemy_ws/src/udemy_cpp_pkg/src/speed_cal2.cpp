#include <iostream>
#include "ros/ros.h"
#include "std_msgs/Float32.h"

float WHEEL_RADIUS ; 
ros::Publisher speed_pub ; 

void subcallback (const std_msgs::Float32::ConstPtr &rpm){

    ros::NodeHandle callback ; 
    if (callback.getParam("wheel_radius" , WHEEL_RADIUS)){
        std_msgs::Float32 speed_msg ; 
        speed_msg.data = (2*WHEEL_RADIUS*3.14159) * (rpm->data / 60) ; 
        speed_pub.publish(speed_msg) ; 
    }else{
        ROS_WARN("No value set for wheel_radius parameter."); 
    }
}

int main (int argc , char **argv){

    ros::init(argc , argv , "speed_cal_node") ; 

    ros::NodeHandle node_handle ; 

    ros::Subscriber rpm_sup = node_handle.subscribe("rpm" , 10 , subcallback) ; 

    speed_pub = node_handle.advertise<std_msgs::Float32>("speed2",10); 

    ros::spin() ; 
    
    return 0  ; 
}