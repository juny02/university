#include <stdio.h>
#include <string.h>
void main ()
{
	char word[20];
	int i;
	scanf("%s", word);
	for (i=0 ; i<strlen(word) ;i++)
	{
		if (word[i]>=65 && word[i]<=90)
			word[i]=word[i]+32;
		else if (word[i]>=97 && word[i]<=122)
			word[i]-=32;
	}
	printf("%s\n", word);
}
