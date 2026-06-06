#include <stdio.h>
//esse foi curto, botei 67 do meme teacher,
   void fizzBuzz(int n) {
    
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0 && i % 5 == 0)
             printf("fizzbuzz ");
         else if (i % 3 == 0)
              printf("fizz ");
          else if (i % 5 == 0)
               printf("buzz ");
           else
                printf("%d ", i);
    }
printf("\n");
 }

 
 
int main()   {
    
    fizzBuzz(100000000);
    
     return 0;
  }