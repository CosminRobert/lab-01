#include <stdio.h>

void rotate_left(unsigned int *number, int bits)
{
	if(*number == 0)
		return;
	unsigned int copie = *number;
	unsigned int  nr = 1, put = 1, cap=0;
	while(put < *number)
	{
		put = put * 2;
		nr++;
	}
	*number = *number << bits;
	//printf("%u \n", *number);
	put = 1;
	for(int i=0; i < bits; i++)
	{
		cap = cap + put;
		put = put * 2;
	}
	cap = cap << (32 - bits);
	cap = cap & copie;
	cap = cap >> (32 - bits);
	*number = *number | cap;
	//printf("%u \n", *number);
	(void) number;
	(void) bits;
}

void rotate_right(unsigned int *number, int bits)
{
	if(*number == 0)
		return;
	unsigned int copie = *number;
	unsigned int  nr = 1, put = 1, cap=0;
	while(put < *number)
	{
		put = put * 2;
		nr++;
	}
	*number = *number >> bits;
	put = 1;
	for(int i=0; i < bits; i++)
	{
		cap = cap + put;
		put = put * 2;
	}
	cap = cap & copie;
	cap = cap << (32 - bits);
	*number = *number | cap;
	(void) number;
	(void) bits;
}

int main()
{
	unsigned int a, auxx;
	int d;
	scanf("%u %d", &a, &d);
	auxx = a;
	rotate_right(&a,d);
	rotate_left(&auxx,d);
	printf("%u %u", a, auxx);
	return 0;
}

