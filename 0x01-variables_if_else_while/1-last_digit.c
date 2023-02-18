#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/*
 * This a main function
 *
 * Return 0 Sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	int l = n % 10;

	if(l>5)
		printf("Last digit of %d is %d grater than 5\n",n,l);
	else if (l==0)
		printf("Last digit of %d is %d and is 0\n",n,l);
	else
		printf("Last digit of %d is %d is less than 6 and not 0\n",n,l);
	return 0;
}
