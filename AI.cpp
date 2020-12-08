  
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
#include "AI.h"
#define LEN 5   
double c0, c1, cov00, cov01, cov11, sumsq;

double *swip(double X[], double m){
  for (int i = 0; i < LEN; i++) {
      if(i==4){
       X[i]=m;}
      else{
      X[i]=X[i+1];}

      }
return X;
}

double T_Pred(int fac,double time1[],double temp1[]){
  double TEMP_P;
  if(fac==1){
 
 gsl_fit_linear(time1,1,temp1,1,LEN,&c0,&c1,&cov00,&cov01,&cov11,&sumsq);
  TEMP_P=c0+c1*(time1[4]+1);
  }
  
  else if(fac==2){
 gsl_fit_linear(time1,1,temp1,1,LEN,&c0,&c1,&cov00,&cov01,&cov11,&sumsq);
  TEMP_P=c0+c1*(time1[4]+1);

   }
return TEMP_P;
}

double P_Pred(int fac,double time1[],double temp1[]){
  double P_P;
  if(fac==1){
 
 gsl_fit_linear(time1,1,temp1,1,LEN,&c0,&c1,&cov00,&cov01,&cov11,&sumsq);
  P_P=c0+c1*(time1[4]+1);
  }
  
  else if(fac==2){
 gsl_fit_linear(time1,1,temp1,1,LEN,&c0,&c1,&cov00,&cov01,&cov11,&sumsq);
  P_P=c0+c1*(time1[4]+1);

   }
return P_P;
}
double H_Pred(int fac,double time1[],double temp1[]){
  double H_P;
  if(fac==1){
 
 gsl_fit_linear(time1,1,temp1,1,LEN,&c0,&c1,&cov00,&cov01,&cov11,&sumsq);
  H_P=c0+c1*(time1[4]+1);
  }
  
  else if(fac==2){
 gsl_fit_linear(time1,1,temp1,1,LEN,&c0,&c1,&cov00,&cov01,&cov11,&sumsq);
  H_P=c0+c1*(time1[4]+1);

   }
return H_P;
}
