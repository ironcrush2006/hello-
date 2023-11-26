/*   
  This program  is to know  about arthmetic operators in C  
  There are a five types of arthimetic operators 
  (+,-,*,/,%) 
  The final one assignment operators  
  (=)  
  Note: only use modulo operator with int 
*/
#include<stdio.h> 

int main(){ 
    int first_number=67; 
    int second_number=23; 
    printf("%d\n",first_number+second_number); // + is the add operator
    float  Sub_num1=78.8; 
    float  Sub_num2=2.767; 
    printf("%f\n",Sub_num1-Sub_num2); //- is the subtract operator 
    double Multi_number1=46464.46461,Multi_number2=131613.133; 
    printf("%f\n",Multi_number1*Multi_number2); //* is the multiply operator
  float fun=89.76,fun1=46.21;
    printf("%f\n",fun/fun1); //(/)is the divide operator 
    int a=23,b=34; 
    printf("%d\n",a%b); // % is the modulo operator and it print remainder of the calculation
    printf ("%d\n",b%a); 
 return 0;
}