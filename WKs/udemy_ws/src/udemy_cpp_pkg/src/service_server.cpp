#include <iostream>
#include "ros/ros.h"
#include "udemy_cpp_pkg/OddEvencheck.h"

bool determineOddEven (udemy_cpp_pkg::OddEvencheck::Request &req , udemy_cpp_pkg::OddEvencheck::Response &res){
    int remainder = req.number % 2 ; 

    if (remainder == 0 ){
        res.answer = "Even" ; 
    }else if (remainder == 1 ) {
        res.answer = "Odd" ; 
    }else{
       return false ; 
    }
    return true ; 
}

int main (int argc , char **argv){
    ros::init(argc , argv , "odd_even_service_server_node") ; 
    ros::NodeHandle node_handle ; 
    ros::ServiceServer service = node_handle.advertiseService("odd_even_check" , determineOddEven) ; 

    ROS_INFO("Odd Even Check Sever Running...") ; 

    ros::spin() ; 

    return 0 ; 
}


