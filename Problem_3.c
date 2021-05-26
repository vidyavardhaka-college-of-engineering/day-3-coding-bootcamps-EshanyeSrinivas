// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number,rem;
    printf("Enter an integer: ");
    scanf("%d", &number);
    rem=number%2;
    if(rem==0)
    {
      printf("%d is even number",number);
    }
   else
   {
     printf("%d is odd number",number);
   }
    return 0;
}
