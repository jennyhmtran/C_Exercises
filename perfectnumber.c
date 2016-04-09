/* What is a perfect number?
* Perfect number is a positive number which
* sum of all positive divisors excluding that number is
* equal to that number. For example 6 is
* perfect number since divisor of 6 are 1, 2 and 3.
* Sum of its divisor is
* 1 + 2+ 3 = 6
* Note: 6 is the smallest perfect number
*/
#include <stdio.h>

int main()
{
int a ;
int sum = 0;
printf("Please input a number to be evaluated: \n");
scanf("%d", &a) ;
// start eval
for (int i = 1; i < a; i++)
{
  printf("%d \n", i) ;
  if (a % i == 0)
  {
    printf("This number is in the if loop %d \n", i);
    sum = sum + i ;
    printf("%d \n", sum);
  }
}

if (a == sum)
{
  printf("%d is a perfect number \n", a);
}
else
{
  printf("This is not a perfect number \n") ;
}

return 0;
}
