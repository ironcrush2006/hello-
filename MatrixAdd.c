#include<stdio.h>
 
void main(){ 
   int a[2][3],b[2][3],c[2][3];  
   printf("A matrix values:\n");
   for(int i=0;i<2;i++){ 
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
   }  
   printf("B matrix values:\n");
   for(int i=0;i<2;i++){ 
    for(int j=0;j<3;j++){ 
       scanf("%d",&b[i][j]);
    }
   } 
   printf("Resultant martix:\n");
      for(int i=0;i<2;i++){ 
    for(int j=0;j<3;j++){ 
       printf("%d\t",a[i][j]+b[i][j]);
    }
  printf("\n");
} 
}