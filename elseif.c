#include<stdio.h>  
 
int main(){ 
     int Age; 
     printf("Enter Your age:"); 
     scanf("%d", &Age); 

     if (Age>=18){ 
        printf("You are eligible to vote \n");   
   
} 
 else if(Age>=100||Age<=18) 
       printf("Your are age is to minimum or maximum to vote ");
else 
       printf("You aren't eliglble to vote ");
     return 0; 
}