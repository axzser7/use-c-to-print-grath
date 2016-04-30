#include "stdio.h"
int main(int argc, char const *argv[])
{
	int s=0,i;
	for ( i = 2; i <= 20; i+=2)
	{
		s+=i;
	}
	printf("%d\n",s );
	return 0;
}