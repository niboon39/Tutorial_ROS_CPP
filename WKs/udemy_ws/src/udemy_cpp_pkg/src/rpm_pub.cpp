#include "iostream"
#include "ros/ros.h"
#include "std_msgs/Float32.h"

// Don't forget "catkin_make"  When change value .  

const float RPM = 200.0 ; 

int main (int argc , char **argv){
    ros::init(argc , argv , "rpm_pub_node"); 

    ros::NodeHandle node_handle ; 

    ros::Publisher rpm_pub = node_handle.advertise<std_msgs::Float32>("rpm" , 10); 

    ros::Rate pub_rate(10); 

    ROS_INFO("Publisher RPM : ");

    while (ros::ok())
    {
        /* code */
        std_msgs::Float32 msg ; 
        msg.data = RPM ; 
        rpm_pub.publish(msg); 
        pub_rate.sleep();
    }
    return 0 ; 
    
}
