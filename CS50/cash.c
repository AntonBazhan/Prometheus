#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   float dollars;
        
     int x =0;
     int y =0;
     int z =0;
     int d =0;

 do
        {
            dollars = get_float("Change owed: ");
        }
        while(dollars <= 0);
        int coins = round(dollars * 100); 
        if (25 <= coins) 
        {      
             x = coins/25;
            coins = coins - x*25;    
        }
        
       if (10 <= coins && coins < 25)
       {
            y = coins/10;
           coins = coins - y*10;
          
            }
           
        if (5 <= coins && coins < 10)
        {
              z = coins/5;
           coins = coins - z*5;
           
            }
            
        if (1 <= coins && coins < 5)
        {
              d = coins/1;
           coins = coins - d*1;
          
            }
            int total = x + y + z + d;
            printf("%i\n", total);
        
}

