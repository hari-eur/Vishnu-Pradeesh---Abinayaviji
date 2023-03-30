#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main()
{
	char *s = "";
	s = (char*)malloc(sizeof(char));
	printf("ENTER THE STRING : ");
	scanf("%[^\n]",s);  //1sA#$2+.
	char ar[strlen(s)];
	int i,count = 0;
	if(strlen(s) == 8)
	{
		printf("8 CHARACTER ONLY...\n");
		for(i=0;i<strlen(s);i++)
		{
			ar[i] = s[i];
		}
	}
	else{
		printf("NOT 8 CHARACTER...\n");
	}
	
	for(i=0;i<strlen(s);i++)
	{
		if((int)ar[i]>32 && (int)ar[i]<127)
		{
			count+=1;	
			}	
	}
	if (count == strlen(s))
		printf("ALL PRESENT..\n");
	else
	    printf("NOT PRESENT..\n");
	
	return 0;
}
