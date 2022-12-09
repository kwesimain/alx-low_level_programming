#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int digit;
	for (num = '0'; num <= '9'; num++)
		{
			putchar(num);
			if (num == '9')
			{
				num = 'a';
				for (; num <= 'f'; num++)
				{
					putchar(num);	
				}
				break;	
			}
		}
		putchar('\n');
		return (0);
}
