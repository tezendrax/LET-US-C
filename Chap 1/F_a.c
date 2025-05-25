//conversion of temp from fahrenheit to centigrade
#include<stdio.h>
int main(){
float t;
printf("enetr temperature (F): ");
scanf("%f",&t);
float nt = (t-32)*(5.0/9.0);
printf("Temperature in centigrade i s : %f",nt);
    return 0;
}