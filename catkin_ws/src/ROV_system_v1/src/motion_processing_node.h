/*
 * Author: Vinnie Marco, Tamara Spivey, and the Most Honorable Christian Upschulte: President of S&T URT
 * Email: vgmcn3@mst,edu, tjsxz4@mst.edu
 * Date: 01-18-2018
 *
 * This handles all data for the motors
 */

#ifndef motion_processing_node_H
#define motion_processing_node_H

#include "constants.h"

float magnitude = 0.0;
float angle = 0.0;
float moment = 0.0;
char vertical = 0;
float Precision = 0.0;

std_msgs::Int16 motor1_value;
std_msgs::Int16 motor2_value;
std_msgs::Int16 motor3_value;
std_msgs::Int16 motor4_value;
std_msgs::Int16 motor5_value;
std_msgs::Int16 motor6_value;

/*
std_msgs::Int16 camera_one_value;
std_msgs::Int16 camera_two_value;
*/
/* velocity_callback handles data recieved from the joystick_x_topic subscription
 * Pre: joystick_x_topic has to be initalized
 * Post: Any variables are updated to their current values for each itteration
 */
void velocity_callback(const std_msgs::Float32 &msg);

/* angle_callback handles data recieved from the joystick_y_topic subscription
 * Pre: joystick_y_topic has to be initalized
 * Post: Any variables are updated to their current values for each itteration******
 */
void angle_callback(const std_msgs::Float32 &msg);

/* trigger_callback handles data recieved from the trigger_topic subscription
 * Pre: trigger_topic has to be initalized
 * Post: Any variables are updated to their current values for each itteration******
 */
void trigger_callback(const std_msgs::Bool &msg);

/* button_pinky_trigger_callback handles data recieved from the button_pinky_trigger_topic subscription
 * Pre: button_pinky_trigger_topic has to be initalized
 * Post: Any variables are updated to their current values for each itteration******
 */
void button_pinky_trigger_callback(const std_msgs::Bool &msg);

void orientation_callback(const geometry_msgs::Vector3 &msg);

void twist_callback(const std_msgs::Float32 &msg);
void calc_motors();

void axis_left_thruster_callback(const std_msgs::Float32 &msg);

/*
void button_h2_up_callback(const std_msgs::Bool &msg);
void button_h2_down_callback(const std_msgs::Bool &msg);*/
#endif
