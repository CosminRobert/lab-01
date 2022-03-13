#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	/* TODO */
	(void) str;
	int i=0;
	while (str[i] != 0)
	{
		i++;
	}
	return i-1;
}

void equality_check(const char *str)
{
	/* TODO */
	(void) str;
}

int main(void)
{
	char p[100], *s=p;
	int i=0;
	scanf("%c", &p[i]);
	fgets(p, 100, stdin);
	printf("%d", my_strlen(s));
	return 0;
}

