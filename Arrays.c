/*Array is single row with infinte cloumn  
It is use group  similiar datatypes  
It can be accessed by index  
syntax- datatypes var_name[size of the array]*/ 
 
 
#include<stdio.h> 


int main(){  
 int i;
    int serial_number[10]={1,2,3,4,5,6,7,8,9}; // An array can be init like this way and it is 1-d array
   for( i=0;i<=8;i++){ 
         printf("%d\n",serial_number[i]);
   }  
        return 0;
}