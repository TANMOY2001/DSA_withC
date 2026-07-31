#include<stdio.h>
int main(){
    
    int arr[]={1,-4,-3,-2};
    int i=0,j;
    unsigned int k=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(j=1;j<n;j++){
        if(arr[i]<arr[j]){
            k=arr[i];
            i=j;
        }
        else if(arr[i]>arr[j]){
            if(k<arr[j]){
            k=arr[j];
            }
        }
    
    }
    printf("out for The second largest element is %i",k);
}