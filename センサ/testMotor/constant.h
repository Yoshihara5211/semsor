/**
* @file cansat.h
* @author Hiroyuki Yoshihara
* @date Created: 20180415
*/
#ifndef _CONSTANT_H_
#define _CONSTANT_H_

//ピン番号指定  
#define LEFT_MOTOR_VREF_PIN 11
#define LEFT_MOTOR_IN1_PIN 12
#define LEFT_MOTOR_IN2_PIN 13
#define RIGHT_MOTOR_VREF_PIN 6
#define RIGHT_MOTOR_IN1_PIN 10
#define RIGHT_MOTOR_IN2_PIN 9
#define RED_LED_PIN 
#define YELLOW_LED_PIN 11
#define GREEN_LED_PIN 12
#define BUZZER_PIN 13
#define ACC_X_PIN A0
#define ACC_Y_PIN A1
#define ACC_Z_PIN A2
#define LIGHT_PIN A3
#define MIC_FRONT_PIN A4
#define MIC_RIGHT_PIN A5
#define MIC_LEFT_PIN A6 
#define MIC_BACK_PIN A7

#define BEAT 100   // 音の長さを指定


//シークエンス
#define PREPARING 0   // 電源オン
#define FLYING 1  // 格納検知
#define DROPING 2  // 放出検知
#define LANDING 3  // 着地検知
#define RUNNING 4  // 走行アルゴリズム
#define GOAL 5  // ゴール検知
#define STUCKING 6  // スタック検知

//閾値
#define ANGLE_THRE 1



#endif

