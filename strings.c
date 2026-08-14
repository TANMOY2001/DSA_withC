#include<stdio.h>
#include<string.h>
// int main(){
    // char name[6]="gopal";
    // printf("The name is:  %s\n",name);
    
    // char arr[6]={'g','o','p','a','l','\0'};
    // printf("The array is:  %c\n",arr[1]);
   //string input and length calculation
    // char name[10];
    // int i,count=0;
    // printf("Enter your name: ");
    // gets(name);
    // printf("The name is: %s\n",name);
    // //using predefinned function strlen() to calculate length of string
    // int length = strlen(name);
    // // printf("length of name is :%d",length);
    // for(int i=0; name[i]!=0;i++){
    //     count++;
    // }
    // printf("(userdefined)length of name is :%d",count);

    // char s1[10];
    // printf("Enter your name: ");
    // gets(s1);
    // int i=0;
    // while(s1[i]!='\0'){
    //     printf("name is :[%d] %c\n",i,s1[i]);
    //     i++;


    // }
//     return 0;
// palindrome check
int main(){
char a[30];
printf("Enter Text To Check Palindrome or Not: ");
scanf("%s",a);
int i=0;
int j=strlen(a)-1;
while (i<j)
{
    if (a[i] != a[j])
    {
        printf("!!! %s is Not Palindrome...\n",a);
        return 0;
    }
    i++,j--;
}
printf("%s is Palindrome...\n",a);
return 0;
}