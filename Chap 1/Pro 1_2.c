//Distance unit conversions
#include<stdio.h>
int main(){
float d;
printf("enter the duistance in km :" );   
scanf("%f",&d);
printf("Distance in meters : %f M\n",d*1000);
printf("Distance in feet : %f feet\n",d*3288);
printf("Distance in inches : %f inches\n",d*39370);
printf("Distance in centimeters : %f CM\n",d*100000);
return 0;                                                                                
}