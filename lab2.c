#include <stdlib.h>
#include <stdio.h>

int function(int x, int* i)
{
	if(x != 0 && x > 0)
	{
		x -= 2;
		(*i)++;
		x = function(x, i);
	}

	return x;
}

int main()
{
	int a=30, i=0;

	a = function(a, &i);

	printf("%d \n", i);
	return 0;	
}