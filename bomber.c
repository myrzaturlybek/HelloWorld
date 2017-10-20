#include <stdio.h>

#define COUNT 20000000

void dropBomb(void);
void delay(void);

int death;

int main()
{
	char x;	

	death=0;
	for(;;)
	{
		printf("Press - then Enter to quit\n");
	
	printf("Press enter to drop the bomb:");
	x=getchar();

	fflush(stdin);
	if(x=='-')
	{
		break;
	}
	dropBomb();
	
	printf("%d people killed\n",death);
	}
	return(0);
}
void dropBomb()
{
	int x;

	for(x=20;x>1;x--)
	{
		puts("          *");
		delay();
	}
	puts("        BOOM!");
	death+=1500; 
}

void delay()
{
	long int x;
	
	for(x=0;x<COUNT;x++);
	   ;
}
