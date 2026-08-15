#include<stdio.h>
#include<conio.h>
#include<string.h>
// int main(){
    // char n[6]="gopal";
    // printf("The name is:  %s\n",n);
    
    // char arr[6]={'g','o','p','a','l','\0'};
    // printf("The array is:  %c\n",arr[1]);
   //string input and length calculation
    // char name[10];
    // int i,count=0;
    // printf("Enter your name: ");
    // gets(name);// Takes input string with spaces(but memory overflow problem it has).
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
// int main(){
// char a[30];
// printf("Enter Text To Check Palindrome or Not: ");
// scanf("%s",a);
// int i=0;
// int j=strlen(a)-1;
// while (i<j)
// {
//     if (a[i] != a[j])
//     {
//         printf("!!! %s is Not Palindrome...\n",a);
//         return 0;
//     }
//     i++,j--;
// }
// printf("%s is Palindrome...\n",a);
// return 0;
// }

// String Concatination (USER DEFINED)
// int main(){
//     char s1[20];
//     char s2[10];
//     int len, len2;
//     printf("Enter the first string: ");
//     scanf("%s",s1);
//     printf("Enter the second string: ");
//     scanf("%s",s2);
//     len=strlen(s1);
//     len2=strlen(s2);
//     // main logical part of concatination
//     for(int i=0;i<=len2;i++){
//         s1[len]=s2[i];
//         len++;
//     }
//     printf("The length is: %d",len);
//     printf("The Concatinated String is: %s",s1);
//     return 0;
// }
// int main(){
//     char s1[20];
//     int count=0, i=0;
//     printf("Enter the string: ");
//     gets(s1);
//     while(s1[i]!='\0'){
//         count++;
//         i++;
//     }
//     printf("The length of the string is: %d\n",count);
//     printf("The string is: %s",s1);
//     return 0;
// }

// String Compare
// int main(){
//     char s1[20], s2[20];
//     printf("Enter the first string: ");
//     gets(s1);
//     printf("Enter the second string: ");
//     gets(s2);
//     int len=strlen(s1);
//     int len1=strlen(s2);
//     if(len != len1){
//         printf("The Strings Are Not Equal\n");
//     }
//     else{
//         for(int i=0;i<len;i++){
//             if(s1[i] != s2[i]){
//                 printf("The Strings Are Not Equal\n");
//                 return 0;
//             }
//         }
//         printf("The Strings Are Equal\n");
//     }
// }