# RCJ-Soccer-2019

This is my program for RoboCup Junior Soccer (Lightweight) Singapore Open 2019 as part of Team Ascension. We finished 4th in the competition, where teams build robots to play robot soccer with an Infrared Ball in a 2v2 match.

This program was adapted from LJStand, the 2018 Lightweight World Champions from Brisbane Boys' College, Australia. (Their gitbucket can be found here: https://bitbucket.org/ljstand/)
We were inspired by their unique IR ring which could detect the IR signals emitted from the ball very well, which led to them dominating the international competition in 2018.

#Robot Description (aka features)
* Teensy 3.5/3.6 (Main microcontroller)
* Arduino Nano (Slave microcontroller via Serial Communication)
* 3 HC-SR04 Ultrasonic sensors
* 16 TSSP58038 IR sensors in a ring
* 28 pairs of LEDs and LDRs to form a light sensor ring
* Adafruit BNO-055 Compass
* 4X China motor drivers and brushless motors
* 3D-printed wheels with rubber rollers
* Completely self-designed carbon fibre plates and PCBs
* OpenMV M7 Camera (eventually scrapped)

Our robot is an omni-directional robot made up of 2 layers and is supported with copper and plastic stands, weighing less than 1100g. The Arduino Nano processes data from the 
ultrasonic sensors and sends the data over to the main Teensy controller. The Teensy combines the ultrasonic data with the light sensor data to help keep the robot within the
playing boundaries. The Teensy also processes the remaining data from the other robot components. The compass helps to keep the robot facing front while its moving around the field.

#Robot Strategies
Generally speaking, we designated 2 robotgrbit the ball until its behind, where it charges forward. We tried to implement some forms of localisation using the ultrasonic sensors to determine our position on the field and adjust its path accordingly such that it is less likely to miss the goal. Sadly, we did not have enough time to fully refine our strategy,

Many thanks to my teammates Shaoliang and Justin for taking charge of the mechanical and electronic design respectively. A huge shoutout to entire Hwa Chong Robotics community for being supportive and helping me get started on RoboCup programming. :)
