#include <stdio.h>

int main()
{
    int a;
    char b;

	printf("Here is thy gird...\n");
    for(a=1;a<10;a++)
    {
	
	for(b='A';b<'K';b++)
	{
		printf("%d-%c ",a,b);
	}
	putchar('\n');
    }      
    return(0);   	
}
