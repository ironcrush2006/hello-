#include<stdio.h>  
#include<ctype.h>

int main(){ 
      char m; 
      printf("Enter the value ::"); 
      scanf("%c",m); 
      if(m==isdigit(m)){ 
          printf("It is number");
      } 
      else if(){ 
        printf("It is a lowercase letter"); 
}  
      else if (m==isupper(m)){ 
            printf("It is uppercase letter");
      }
return 0; 
}