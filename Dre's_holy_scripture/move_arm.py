#!/usr/bin/env python

# To use the API, copy these 4 lines on each Python file you create
from niryo_robot_python_ros_wrapper.ros_wrapper import *
import rospy
import time
import math

rospy.init_node('niryo_robot_example_python_ros_wrapper')

print "--- Start"

n = NiryoRosWrapper()

try:
    # Calibrate robot first
    n.calibrate_auto()
    print "Calibration finished !"

    time.sleep(1)

    # Move
    n.set_arm_max_velocity(30)
    
    joint_target = [0.0, 0.0, 0.0, 0.072, 0.032, 1.820]
    n.move_joints(*joint_target)

    #n.move_pose(0.245, 0, 0.418, 1.893, -0.032, -0.002)
   

    #n.shift_pose(ShiftPose.AXIS_X, 0.1)
    #n.shift_pose(ShiftPose.ROT_PITCH, math.radians(25))

    n.set_learning_mode(True)


except NiryoRosWrapperException as e:
    print e
    # handle exception here
    # you can also make a try/except for each command separately

print "--- End"
