/*struct in C
It is datatype which stores different kinds of datatypes  
Struct can be accessed by other function using dot operator  
If your are from  any other programming lanugage then struct are like class in c  
and it is always public */
#include<stdio.h> 
 

 struct classroom{ 
      int roll_no;
       char name[30]; 
       float attendance; 
 }student; 
  
  void  data( ){  
    printf("Enter the rollno number:"); 
       scanf("%d",&student.roll_no);
    printf("Enter your name:"); 
       scanf("%s",student.name); 
    printf("Enter the attendance:");
       scanf("%f",&student.attendance);

  } 
  void print(){ 
    printf("ROll_NO:%d\n",student.roll_no); 
    printf("NAME:%s\n",student.name); 
    printf("ATTENDANCE:%0.2f\n",student.attendance);
  }

  int main(){ 
      data();   
      print();
      return 0;
  }