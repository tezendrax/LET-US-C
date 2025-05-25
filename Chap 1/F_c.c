//Calculation of paper sizes(A0,A1,A2...A8)
#include<stdio.h>
int main(){
    int a= 1189,b=841;
for(int i =0 ; i<=8;i++){
    int temp = a;
    printf("Paper size of A%d is %d mm x  %d mm\n",i,a,b);
    a=b;
    b=temp/2;
}

    return 0;
}