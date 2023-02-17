#include <stdlib.h>
#include <time.h>


 /** main - A program that will  print whether the number stored
  * in the variable n is positive or negative
  * Return: (0) (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	else
		printf("is zero");
	return (0);
}
