/* Input the value from the user for that  
use pre-defind function scanf() ;
 &- this symbol denotes the address of the var in the memory  
 */ 
#include<stdio.h> 
int main() { 
    int a,b; 
    printf("Enter the value the value of :"); 
    scanf("%d",&a); 
    printf("Enter the value the value of :");
    scanf("%d",&b); 
    printf("The answer is :%d",a+b);
     return 0;
}