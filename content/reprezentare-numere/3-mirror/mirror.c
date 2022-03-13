#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	int n=0;
	while(*(s + n) != 0)
	{
		n++;
	}
	n--;
	int i = 0;
	//printf("%s", s);
	while(i != n)
	{
		char x;
		x = *(s + i);
		*(s + i) = *(s + n);
		*(s + n) = x;
		n--;
		i++;
	}
	(void) s;
}

int main()
{
	/* TODO: Test function */
	char *s = malloc(100);
	fgets(s,100,stdin);
	//printf("%s", mama);
	mirror(s);
	printf("%s", s);
	return 0;
}

