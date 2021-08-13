#include <iostream>
#include <string>

#include "ros/ros.h"
#include "std_msgs/String.h"


int main (int argc , char **argv){
    ros::init(argc , argv , "hello_world_pub_node");

    ros::NodeHandle node_handle ; 

    // Name Topic 
    ros::Publisher hello_world_pub = node_handle.advertise<std_msgs::String>("hello_world",10);

    ros::Rate pub_rate(5);

    ROS_INFO("Publisher Node Started"); 

    int count = 0 ; 

    while (ros::ok())
    {
        /* code */

        std_msgs::String msg ; 
        msg.data = "Hello World : " + std::to_string(count) ; 

        hello_world_pub.publish(msg) ; 

        count ++ ; 
        pub_rate.sleep() ; 
    }
    
}

