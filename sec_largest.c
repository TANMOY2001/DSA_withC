#include<stdio.h>
int main(){
    int i=0,j,k=0;
    int arr[]={4,3,1,2};
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
    printf("out for The second largest element is %d",k);
}