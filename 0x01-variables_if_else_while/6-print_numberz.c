#include <stdio.h>
#include <ctype.h>

/* Documentation*/

int main(void)
{
	int num;

	for (num = '0'; num  <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
