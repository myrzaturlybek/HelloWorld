#include <stdio.h>

void jerk(int repeat, char c);
int main()
{
	printf("He calls me on the phone with nothing say\n");
	printf("Not once, or twice, but three timesa day!\n");
	jerk(1,'?');
	printf("He insulted my wife, my cat, my mother\n");
	printf("He irritates and grates, like no other!\n");
	jerk(2,'?');
	printf("He chucles it off, his big belly a-heavin'\n");
	printf("But he won't be laughing when i get even!\n");
	jerk(3,'!');
	return(0);
}
void jerk(int repeat, char c)
{
	int i;

	for(i=0;i<repeat;i++)
		printf("Bill is a jerk%c\n",c);
}
        
