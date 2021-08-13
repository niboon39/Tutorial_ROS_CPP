#include <iostream>
#include "ros/ros.h"
#include "std_msgs/Float32.h"

const float WHEEL_RADIUS = 12.5 / 100 ; //Size in centimeters --> meters 

ros::Publisher speed_pub ; 

void subcallback(const std_msgs::Float32::ConstPtr&rpm){
    std_msgs::Float32 speed_msg ; 

    //speed = Circumference * Rev/s 
    speed_msg.data = (2 * WHEEL_RADIUS * 3.14159) * (rpm->data / 60) ; 
    speed_pub.publish(speed_msg) ;  
}

int main(int argc , char **argv){
    ros::init(argc , argv , "speed_cal_node");

    ros::NodeHandle node_handle ; 

    ros::Subscriber rmp_sub = node_handle.subscribe("rpm" , 10 , subcallback);

    speed_pub = node_handle.advertise<std_msgs::Float32>("speed" , 10) ; 

    ros::spin() ; 

    return 0 ; 
}