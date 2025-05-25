// percentage and total marks obtain by student in 5 subjects
#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5;
    printf("eneter marks obtain by student in subject 1 , 2 , 3 , 4 , 5 :");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    printf("percentage : %f\n",(s1+s2+s3+s4+s5)/5);
    printf("aggregate : %f",s1+s2+s3+s4+s5);
    return 0;
}