#include<stdio.h> 
 int var;
int main(){  
    //This method is using bitwise operator 
    int a=10,b=20;
    a=a^b; 
    b=a^b; 
    a=b^a; 
    printf("%d\n",b); 
    printf("%d\n",a);  
    printf("---------------------------------\n");
    //Another method is arithmetic operator     
   int a2=20,b2=30; 
     a2 = a2 + b2;
    b2 = a2 - b2;
    a2 = a2 - b2; 
   printf("%d\n",b2);  
   printf("%d\n",a2);      
   printf("-----------------------------------\n"); 
   //this method three variable  
   int a1=30,b1=40;
   var=a1; 
   a1=b1; 
   b1=var;  
   printf("%d\n",a1);
   printf("%d\n",b1); 
   return 0;

}