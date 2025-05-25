//area and perimeter of rectangle and circle
#include<stdio.h>
int main(){
    float l,b,r;
    printf("enter length and  breadth of rectangle : ");
    scanf("%f%f",&l,&b);
    float r_a = l*b, r_p = 2*l+2*b;
    printf("area of rectangle = %f \nperimeter of rectangle = %f\n",r_a,r_p);

    printf("enter raduis of circle : ");
    scanf("%f",&r);
    float c_a =3.14*r*r, c_c = 2*3.14*r;
    printf("area of circle = %f \ncircumference of circle = %f",c_a,c_c);


    return 0;
}