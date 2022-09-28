#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	printf("%c", *s);
	s++;
	_puts_recursion(s);
}

int main(){
	_puts_recursion("James");
}


