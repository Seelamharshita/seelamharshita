#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],RevStr[100];
	int i,j,len;
	
	printf("\n please enter any text: ");
	gets(str);
	
	j=0;
	len=strlen(str);
	
	for(i=len-1; i>=0; i--)
	{
		RevStr[j++]= str[i];
	}
	printf("\n and the result of it is=%s",RevStr);
	
	return 0;
}
