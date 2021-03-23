#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char names[3][15];
	int i = 0;

	i = 0;
	while (i < 3)
	{
		printf("What is your name?\n");
		scanf("%s", names[i]);
		/*if (name == "quit")
			break;
		*/
		printf("Your name is %s\n", names[i]);
		i++;
	}
	printf("_________\n");
	for (i = 0; i < 3; i++)
		printf("%s\n", names[i]);
	return 0;
}