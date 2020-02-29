#include <stdlib.h>
#include <stdio.h>

int main (int argc, __attribute__((unused)) char* argv[])
{
	
	int i, sum;
	
	if(argc >1)
	{
		for(i=1; i < argc; i++)
		{
			sum += 1 ;
		}
		printf("%d\n", sum);
		
	}
	return (0);
}