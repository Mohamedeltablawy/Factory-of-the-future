#include <gsl/gsl_math.h>
#include <gsl/gsl_sf_bessel.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_fit.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<iomanip>
#include <algorithm> 
#include <chrono> 
#include<vector> 
#include <queue>
#include "AI.h"
double time1[5]={0};
double time2[5]={0};
double temp1[5]={0};
double temp2[5]={0};
double p1[5]={0};
double p2[5]={0};
double h1[5]={0};
double h2[5]={0};
double Temp1_p;
double pressure1_p;
double Temp2_p;
double pressure2_p;
double h1_p;
double h2_p;

  struct send_data {
	/*! Identifier */
	int fac;
	/*! Time of data */
	long long int timeStamp; 
	/*! Compensated pressure */
	double pressure;
	/*! Compensated temperature */
	double temperature;
	/*! Compensated humidity */
	double humidity;
	/*! Alarm ON/OFF */
	int alarmON : 1;
	/*! Fan ON/OFF */
	int fanON : 1;
    }; 

int main(void){

  struct send_data s;


 
  s.fac=1;
  s.timeStamp=5;
  s.temperature=6;
  s.pressure=7;
  s.humidity=8;
  if(s.fac==1){
  swip(time1,s.timeStamp);
  swip(temp1,s.temperature);
  swip(p1,s.pressure);
  swip(h1,s.humidity);
  }
  else if(s.fac==2){
  swip(time2,s.timeStamp);
  swip(temp2,s.temperature);
  swip(p2,s.pressure);
  swip(h2,s.humidity);
   }

  Temp1_p=T_Pred(1,time1,temp1);
  printf("prediction temp for factiry 1  %f \n",Temp1_p);
  Temp2_p=T_Pred(2,time2,temp2);
  printf("prediction temp for factiry 2  %f \n",Temp2_p);
  return 0;


}
