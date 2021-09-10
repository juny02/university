#include <stdio.h>
#include <string.h>
void main()
{
	char str1 [20];
	char str2 [20];
	char copy [20];
	scanf("%s %s", str1, str2);
	strcpy(copy, str1);
	strcat(copy, str2);
        
	printf("str%d: %s\n", 1, str1);
	printf("str%d: %s\n", 2, str2);
	printf("length of str%d: %ld\n", 1, strlen(str1));
	printf("length of str%d: %ld\n", 2, strlen(str2));
	printf("str%d+str%d: %s\n", 1, 2, copy);
	if(strcmp(str1, str2)==0)
		printf("same\n");
	else
		printf("not same\n");
}
