#include <ros/ros.h>



int main(int argc, char** argv) {
    ros::init(argc, argv, "lidar_odom_calib");
    ros::Time::init();
    ros::NodeHandle nh;
    ros::NodeHandle nhp("~");


    return 0;
}