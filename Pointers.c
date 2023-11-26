 /*This program teaches you pointers basic  
 pointer are datatypes which can store addresses 
 if try to print address of a pointer var then it output a hexdecimal num 
 syntax for pointer (datatype * variable_name)    
 here the asterrisk is symbol for pointer 
 &-this is for the address of the variable 
 */
 
 #include<stdio.h> 
 
 int main(){ 
    int a =10; 
    int *b=&a ; //here the address of a is stored in b
    printf("%d\n",*b);   // *variable_name will give you the value 
    printf("%p",b); //%p this is the format specifier for pointer 
    return 0; 
 }