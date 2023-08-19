#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){    
   char msg_bit_input[128];    
   char msg_bit_output[128];    
   char caruno='1';    
   int i;    
   int one = 0;
   printf("Insert the byte: "); 
   scanf("%s", msg_bit_input);
   strcpy (msg_bit_output, msg_bit_input); 
   for(i=0;i<8;i++){        
       if(msg_bit_input[i]==caruno){            
           one++;
       }
   }
   if(one%2==0){        
       //byte is even        
       strcat (msg_bit_output, "0");    
   } else if(one%2==1){
       //byte is uneven      
       strcat (msg_bit_output, "1");
   }
   printf("The result is: %s", msg_bit_output);    
   return (EXIT_SUCCESS); 
}