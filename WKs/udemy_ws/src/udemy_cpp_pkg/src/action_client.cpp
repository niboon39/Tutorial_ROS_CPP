#include <iostream>
#include "ros/ros.h"

#include "actionlib/client/simple_action_client.h"
#include "udemy_cpp_pkg/Navigate2DAction.h"

using namespace std ; 

typedef actionlib::SimpleActionClient<udemy_cpp_pkg::Navigate2DAction> NavClient ; 

bool feedback_cd_ready_flag = false ; 

void activeCallback(){
    cout << "\n Goal Activated "<< endl;
    feedback_cd_ready_flag = true ;

}

void resultCallback(const actionlib::SimpleClientGoalState& state , const udemy_cpp_pkg::Navigate2DResult::ConstPtr& result){
    cout << "\n\n Finished. \n Time Elapsed : " << result->elapsed_time << endl ; 
    feedback_cd_ready_flag = false ; 
}

void feedbackCallback(const udemy_cpp_pkg::Navigate2DFeedback::ConstPtr& feedback){
    if (feedback_cd_ready_flag){
        cout << "\33[2K\r" ; 
        cout << "Distance to Goal : " << feedback -> distance_to_point ; 
        cout.flush()  ; 
    }
}   

int main (int argc , char **argv){
    ros::init(argc , argv , "navigate_2d_client_node") ; 

    NavClient client("navigate_2d" , true); 
    client.waitForServer() ; 

    udemy_cpp_pkg::Navigate2DGoal goal ; 
    goal.point.z = 0 ; 

    while (ros::ok()){
        /* code */

        cout << "\n Enter the X-Coordinate : " ; 
        cin >> goal.point.x ; 

        cout << "\n Enter the Y-Coordinate : " ; 
        cin >> goal.point.y ; 

        client.sendGoal(goal , &resultCallback , &activeCallback , &feedbackCallback) ; 
        client.waitForResult() ; 

    }
    
    return 0 ; 
}