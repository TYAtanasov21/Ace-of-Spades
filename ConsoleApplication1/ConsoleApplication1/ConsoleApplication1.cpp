#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	printf("Enter a character: ");
	scanf( "%c", &c );
	if (isalnum(c) == 0)
	{
		printf("%c is not an alphanum", c);
	}
	else
	{
		printf("%c is an aplhanum", c);
	}
}