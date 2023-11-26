// switch is alternate for if-else condition  
//but don't use string in case as condition 
//make sure that you know some basics of array   
#include<stdio.h> 
 
int main (){ 
      int number[5],choice;  // this an array of index[5]
      printf("Enter the choice(1,2,3,4,5);"); 
      scanf("%d",&choice); // input fun for choice 
   
      switch (choice)  {  // syntax for switch statement switch(condition){}
        case 1:  // this is the executeable section for condition '1'
             printf("Enter the value:");
             scanf("%d",&number[0]);  //number[index]
             printf("Element is added");
             break;  //use break or else it execute all below lines 
            case 2: 
             printf("Enter the value:");
             scanf("%d",&number[1]);  
             printf("Element is added");

             break;  
                  case 3: 
             printf("Enter the value:");
             scanf("%d",&number[2]);  
             printf("Element is added");

             break;  
                  case 4: 
             printf("Enter the value:");
             scanf("%d",&number[3]);  
             printf("Element is added");
             break;  
                  case 5: 
             printf("Enter the value:");
             scanf("%d",&number[4]);  
             printf("Element is added");
             break;  
             default : 
                printf("You entered the entered the wrong input"); 
                break;
         
      }

     return 0;
}