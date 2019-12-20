/* 
 * motor_test.ino
 * Example sketch for Grove - I2C Motor Driver v1.3
 *
 * Copyright (c) 2012 seeed technology inc.
 * Website    : www.seeed.cc
 * Author     : Jerry Yip
 * Create Time: 2017-02
 * Change Log :
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "Grove_I2C_Motor_Driver.h"

// default I2C address is 0x0f
#define I2C_ADDRESS 0x0f

void setup() {
  Serial.begin(9600);
  Motor.begin(I2C_ADDRESS);
  Motor.stop(MOTOR2);
  Motor.stop(MOTOR1);
}

void loop() {
  // Set speed of MOTOR1, Clockwise, speed: -100~100 
  Motor.speed(MOTOR1, 100);
  Motor.speed(MOTOR2, 100);
  delay(5000);
  
  Motor.speed(MOTOR1, 50);
  Motor.speed(MOTOR2, 50);
  delay(5000);
  
  Motor.speed(MOTOR1, 30);
  Motor.speed(MOTOR2, 30);
  delay(5000);
  
  Motor.speed(MOTOR1, 10);
  Motor.speed(MOTOR2, 10);
  delay(5000);

  
  Motor.speed(MOTOR2, -100);
  Motor.speed(MOTOR1, -100);
  delay(5000);
  
  Motor.speed(MOTOR1, -50);
  Motor.speed(MOTOR2, -50);
  delay(5000);
  
  Motor.speed(MOTOR1, -30);
  Motor.speed(MOTOR2, -30);
  delay(5000);
  
  Motor.speed(MOTOR1, -10);
  Motor.speed(MOTOR2, -10);
  delay(5000);
  
  // Stop MOTOR1 and MOTOR2
  Motor.stop(MOTOR2);
  Motor.stop(MOTOR1);  
  delay(5000); 
}

// End of file
