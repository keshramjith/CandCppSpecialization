#include<stdio.h>
#include<math.h>
int main(void){
   double input;
   printf("Enter a value between 0 and 1 (non inclusive)\n");
   scanf("%lf", &input);
   if (input >= 0 && input < 1) {
      printf("sine of %f is %f \n", input, sin(input));
      return 0;
   }
   printf("Please select a number between 0 and 1 (non-inclusive).\n");
   return 0;
}
