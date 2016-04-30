#include "stdio.h"

long fun(){
	int i=1;
	long f=1;
	do{f=f*i;
		i=i+1;}while(i<=20);
	return f;
}

int main()
{
	long fact;
	fact = fun();
	printf("%ld\n", fact);
}