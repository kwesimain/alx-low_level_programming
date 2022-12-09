#include<stdio.h>
#include<ctype.h>

int main(void){
	int alpha;
	for (alpha = 'z'; alpha>= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar(\n);
	return(0);
}
