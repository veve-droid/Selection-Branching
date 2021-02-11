//Problem A
#include <stdio.h>

int main(){

int a, b, c;
printf("Enter 3 numbers: ");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);

	if (a>b)
   {
      if (b>c)
		{
         printf("%i %i %i\n", a,b,c);      
		}
      else
      {
         if (a>c)
         {
			printf("%i %i %i\n", a,c,b); 
            }
         else
         {
            printf("%i %i %i\n", c,a,b); 
			}
      }
   }
   
   else
   {
      if (a>c)
      {
		printf("%i %i %i\n", b,a,c);
      }
      else
      {
         if (b<c)
         {
			printf("%i %i %i\n", c,b,a);
         }
         else
         {
			printf("%i %i %i\n", b,c,a);
		 }
      }
   }

   return 0;
}