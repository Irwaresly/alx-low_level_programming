#include <stdlib.h>
#include <time.h>
 /**
  * main - This program will assign a random number to the variable n each time it is executed
  *
  * Description - It then prints whether the number storec in the variable is positive or negative 
  *
  * return : 0 succcesss
  */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else 
printf("%d is negative\n", n);
return (0);
}
