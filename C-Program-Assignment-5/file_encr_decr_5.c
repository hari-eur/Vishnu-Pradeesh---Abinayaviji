#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str="";
	str = (char*)malloc(sizeof(char));
	printf("ENTER THE STRING  : ");
	scanf("%[^\n]",str);
	
	printf("\nSTRING IS : %s",str);
	
	FILE *fw;
	fw = fopen("file.txt","w");
	fputs(str,fw);
	fclose(fw);
	
	
	str = (char*)malloc(sizeof(char));
	FILE *fr;
	fr = fopen("file.txt","r");
	fscanf(fr,"%[^\n]",str);
	printf("\nFILE STRING : %s",str);
	fclose(fr);
	
	int key;
	printf("\nENTER THE KEY : ");
	scanf("%d",&key);
	
	FILE *fe;
	fe = fopen("encr.txt","w");
	int i,temp;
	for(i=0;i<strlen(str);i++)
	{
		temp = (int)str[i] + key;
		str[i] = (char)temp;
	}
	fputs(str,fe);
	fclose(fe);
	
	FILE *fdr;
	str=(char*)malloc(sizeof(char));
	fdr = fopen("encr.txt","r");
	fscanf(fdr,"%[^\n]",str);
	printf("\nENCRYPTED STRING : %s",str);
	fclose(fdr);
	
	FILE *fdw;
	fdw = fopen("decr.txt","w");
	for(i=0;i<strlen(str);i++)
	{
		temp = (int)str[i] - key;
		str[i] = (char)temp;
	}
	fputs(str,fdw);
	printf("\nDECRYPTED STRING : %s",str);
	fclose(fdw);
	

	
	return 0;
}
