#include<stdio.h> 

void main(){ 
     int num[50],n,i;  
     printf("Enter the value for n:"); 
     scanf("%d",&n);
     for( i=0;i<=n;i++){ 
          printf("Enter the value::") ;
          scanf("%d",&num[i]);
     } 
     printf("Enter the value to be search::"); 
     scanf("%d",&n) ;  
     for(i=0;i<10;i++){ 
        printf("i=%d\n",i);  
        if(num[i]==n){ 
               break;
        }
     } 
     if (num[i]==n)
 printf("Element  found ")  ;
 else
 printf("Elements not found ");
}
