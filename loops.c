 /* THis program explains the concept loops in C  
 THer three types of loops -while ,do-while ,for . 
 This process is called as iteration  
 Note: ++ this operator only increase the count only one time  
 Make sure that you have start and end values clearly or else it will be a infinite loop 
 */
 #include<stdio.h> 
 
 int main (){   
    int a,b,c;
    int i=0; 
    // while loop -it can be used for result which you know the starting point 
    while (i<5)  // while is the keyword used to create a while loop
    {   //while(condition){ code }
           printf("while loop is created \n")  ; 
           i++;   // this is a increament operator this means i=i+1  
    } 
    //for  loop 
    for(int j=0;j<=3;j++){  // for(initialise value;condition;increament(or)drecreament){code}
        printf("For loop is created \n ");
    }
    
    for(a=1,b=0,c=3;a<=5,b<=5,c>1;a++,b++,c--){ 
        printf("%d%d%d",a,b,c);
    } 


    double number, sum = 0;

    // The body of the loop is executed at least once
    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);

    printf("Sum = %.2lf", sum);

    return 0;
 }