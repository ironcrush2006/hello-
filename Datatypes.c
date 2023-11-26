 //Basic datatypes in C 
 //format specificer -(%d,%f,%c)
 #include<stdio.h> //header file 

int main(){  //main fumction it is in-bulit function
    int a=12; //int is used to print whole number
    int b=23; 
    int sum =a+b;
    printf("The answer is :%d\n",sum); //(\n)is used to print newline in the output
    float a1=5.67f;  // print the value upto six digits after the point 
    float c1=5.456f; 
    printf("The answer is :%f\n",a1-c1);  
    double a2=4.689467498; //prints the larger value than float 
    double c2=2.47494496; 
       printf("The answer is :%f\n",a2*c2);   
    char s='d'; // prints the single character
       printf("The answer is :%c",s);   
       return 0;
}