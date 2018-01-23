#include<stdio.h>
void main()                                                      
   {                                                           
       int count;                                                   
       floatvalue, high, low, sum, average, range;                              
       sum = 0;                                                
       count = 0;                                              
       printf("Enter numbers in a line :                       
                 input a NEGATIVE number to end\n");           
   input:                                                      
       scanf("%f", &value);                                    
       if (value < 0) goto output;                             
          count = count + 1;                                   
       if (count == 1)                                         
          high = low = value;                                  
       elseif (value > high)                                  
               high = value;                                   
            elseif (value < low)                              
                 low = value;  
      sum = sum + value;                                       
      goto input;  

                                            
   output:                                                     
      average = sum/count;                                         
      range = high - low;                                      
      printf("\n\n");                                          
      printf("Total values : %d\n", count);                    
      printf("Highest-value: %f\nLowest-value : %f\n",         
               high, low);                                     
      printf("Range        : %f\nAverage      : %f\n",         
               range, average);                                
   }                                                           
                                                               
   
