#include <iostream>
#include <ros/ros.h>
#include "udemy_cpp_pkg/OddEvencheck.h"

using namespace std ; 
using namespace ros ; 
using namespace udemy_cpp_pkg ; 

int main (int argc , char **argv){

    init(argc , argv , "odd_even_service_client_node"); 

    NodeHandle node_handle ; 

    ServiceClient client = node_handle.serviceClient<OddEvencheck>("odd_even_check");

    OddEvencheck odd_even_check_srv ; 

    int input_num  ; 

    cout << "Type '0' to quit " << endl; 

    while (ok()){
        cout <<"Enter a Integer : " ; 
        cin >> input_num ; 

        odd_even_check_srv.request.number = input_num ; 

        if (input_num == 0 ){
            ROS_INFO("Exiting Application ....") ; 
            return 0 ; 

        }else if ( client.call(odd_even_check_srv) ){
            string resp ; 
            resp = odd_even_check_srv.response.answer ; 
            cout << "The number is " << resp << endl; 

        }else{
            ROS_ERROR("Service Call Failed");
            return 1 ; 
        }
        cin.clear() ; 
    } 
}