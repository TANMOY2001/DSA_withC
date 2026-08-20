#include<stdio.h>
int main(){
    // //pointer arithmetic
    // int a[5]={1,2,3,4,5};
    // int *p=&a[0];
    // int *q=&a[4];
    // int d=q-p;
    // printf("The difference is: %d",d);
    // q=q-2;
    // printf("\nThe value of q is: %d",*q);
    //pointer arithmetic(increment / decrement)
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    p++;//p=p+1; 
    printf("The value of p is: %d %d",*p++,*p++);

    
}//;p[]