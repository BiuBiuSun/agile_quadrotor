
#ifndef TRAJECTORY_CLASS_H
#define TRAJECTORY_CLASS_H

#include <ros/ros.h>
#include <Eigen/Dense>

class trajectory_class{

private:

	ros::NodeHandle nh_;
	
	Eigen::Vector3d target_position;
	Eigen::Vector3d target_velocity;
	Eigen::Vector3d target_acceleration;
	Eigen::Vector3d target_angvel;


public:

	trajectory_class();
    
    virtual ~trajectory_class();

    virtual void trajectory_generator(double)             = 0;

    virtual int maneuver_init()                           = 0;

    virtual Eigen::Vector3d calculate_trajectory_angvel() = 0;

    
	virtual Eigen::Vector3d get_target_pos()              = 0;
	virtual Eigen::Vector3d get_target_vel()              = 0;
	virtual Eigen::Vector3d get_target_acc()              = 0;
	virtual Eigen::Vector3d get_target_jerk()             = 0;
	virtual Eigen::Vector3d get_target_angvel()           = 0;
	virtual double		    get_target_yaw()              = 0;

};



#endif