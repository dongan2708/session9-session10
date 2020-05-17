/* ECHO PROGRAM*/
/* A program to accept input data from the console and orintf it on the screen*/
/* End of input data is indicated by pressing '^z'*/
#include <stdio.h>
main()
{
	char ch;
	while((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}
