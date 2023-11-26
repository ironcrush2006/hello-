#include<stdio.h> 

//to find odd or even number 
void odd_even(int x) {  
      if(x&1){ 
         printf("It is odd\n");
      } 
      else{ 
        printf("It is even\n");
      }
}
float result(float a ,float b){ 
    float c=a+b; 
    printf("Sum =%f",c);
}  
int Greatest_number(int x,int y,int z){  
    printf("\n");
    if ((x>y)&&(x>z)) 
         printf("A is greatest"); 
    if((y>x)&&(y>z)) 
    printf("B is greatest "); 
    if((z>x)&&(z>y)) 
     printf("C is greatest");
}
int Sum_of_Numbers(int a){  
    int sum=0;
      for(int i =1;i<=a;i++){ 
        sum+=i; 
      } 
      printf("\nAnswer is :%d",sum);
} 
int Largest_element() {
    int a,largest; 
    int num[6]={2,3,4,5,8,7} ;
    printf("Enter the value:\n"); 
    scanf("%d",&a);  
    largest=num[0];
    for(int i=1;i<a;i++){ 
      if(num[i]>largest){ 
            largest=num[i];
      }
    } 
    printf("The largest value ::%d",largest);
}
int  main(){ 
    odd_even(2);  
    result(2.45,5.48);  
    Sum_of_Numbers(3); 
    Greatest_number(10,3,4); 
    Largest_element();
    return 0;
}
    