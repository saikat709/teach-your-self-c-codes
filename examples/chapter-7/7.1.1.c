#include <stdio.h>

    // this is the volume ()'s full prototype 
    double volume(double s1, double s2, double s3);

int main( ){
    double vol;
  //  vol=volume(12.2,5.67,9.03,10.2); error,
  vol=volume(4,5,6);
  printf("Volume is : %f\n",vol);
  


    return 0;
}
double volume(double s1, double s2, double s3){
    return s1*s2*s3;
}