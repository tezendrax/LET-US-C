//gross salary calculation
#include<stdio.h>
int main(){
    float bs,gs;
    printf("enter basic salary : ");
    scanf("%f",&bs);
    gs = bs + 0.4*bs/*da*/+ 0.2*bs/*hra*/;
    printf("gross salary : %f",gs);
    return 0;


}

//method 2:-
/*#include<stdio.h>
int main(){
    float bs,gs,da,hr;
    printf("enter basic salary : ");
    scanf("%f",&bs);
    hr = 0.2*bs;
    da = 0.4*bs;
    gs = bs + hr+ da;
    printf("gross salary : %f",gs);
    return 0;


}*/