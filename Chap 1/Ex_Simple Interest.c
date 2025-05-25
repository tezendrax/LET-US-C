//Simple Interest
#include <stdio.h>
int main(){
    int p,n;
    float r,si;
    printf("enter Principal amount , no of years , rate of interest : ");
    scanf("%d%d%f",&p,&n,&r);
    si = p*n*r/100; //formula 
    printf("\nsimple interest is : %f",si); 
    return 0;
} 
