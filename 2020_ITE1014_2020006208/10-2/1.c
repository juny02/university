#include <stdio.h>
#include <string.h>
int D(char*, int i);
void main()
{
	char word [20];
	scanf("%s", word);
	if (D(word, strlen(word))==1)
		printf("This is a palindrome\n");
	else
		printf("This is not a palindrome\n");
}

int D (char* arr,int i)
{
	int k;
	for(k=0; k<i; k++)
	{
		if (arr[k]!=arr[i-k-1])
			return 0;
		if (k==0)
			return 1;
		else if (k==i-1)
			return 1;
	}
}
	
