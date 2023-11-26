 /*It is the alternate method of using struct  
 Unions are used to save memory  
 think that you create  a  struct which as a int ,float and char 
 but you use int for the process then union is recommended*/
 #include<stdio.h>  

union game{ 
      int player_id;  // this only will be seen in the output 
      float percent;
}; 


int main(){ 
     union game player; 
    player.percent=0.25;
    
     printf("The value is =%f\n",player.percent) ; 
     printf("The value name=%s\n",player.player_id);
return 0;
}