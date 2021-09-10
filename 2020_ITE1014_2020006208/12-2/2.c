#include <stdio.h>
#include <string.h>

void main()
{
	char words[10][21];
	int i;
	for (i=0; i<10; i++)
	{
		printf("Enter a word (Enter 'end' to quit):");
		char a [21];
		scanf("%s", words[i]);
		if (strcmp(words[i],"end")==0)
		{
			break;
		}
		for (int a; a<i; a++)
		{
			if (strcmp(words[i],words[a]))
			{
				printf("This word already exist. Please enter another word.|n");
				break;
			}
		}

	}
	printf("%d words :in the list:\n", i);
	for (int k=0; k<i; k++)
		printf("%s ", words[k]);
	printf("\n");
	for (int a=0; 1; a++)
	{
		printf("Enter a word to search (Enter 'end' to quit): ");
		char aa [21];
		scanf("%s", aa);
		if (strcmp(aa, "end")==0)
			break;
		int b=0;
		for (int p=0; p<i; p++)
		{
			if(strcmp(words[p], aa)==0)
			{
				printf("This word is in the list.\n");
				b=0;
				break;
			}
			else
				b=1;
		}
		if (b)
			printf("This word is Not in the list.\n");

	}
}
