#include<stdio.h>
#include<malloc.h>
#include<string.h>


void permute(char* a,int l,int r)
{	
    char temp;
    
    int i;
    if (l==r)
    {   
    	printf("PERMUTATION =  %s\n",a);
	}
	else{
		for(i=l;i<=r;i++)
		{
			temp = *(a+l);
			*(a+l) = *(a+i);
			*(a+i) = temp;
			
			permute(a,l+1,r);
			
			temp = *(a+l);
			*(a+l) = *(a+i);
			*(a+i) = temp;
			}	
		}	
	}

int main()
{
	char *s = "";
	s = (char*)malloc(sizeof(char*));
	printf("ENTER THE STRING : "); // input --- as@23QW.
	scanf("%[^\n]",s);
	printf("THE STRING IS %s",s);
	
	int i,count=0;
	if(strlen(s) == 8)
	{
		printf("LENGTH  = 8 \n");
		
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>=33 && s[i] <= 125)
		{
			count+=1;
		}
	}
}
	else{
	printf("FAILED...\n");
}
int k=0;
char c;
 if(count == strlen(s))
 {
 	printf("PERMUTATION STARTED ... \n");
 	permute(s,0,strlen(s)-1);
 	
	 }
 	
	return 0;
}
