#include<stdio.h>
#include<string.h>
int main()
{
	char p1[50],p2[50];
	printf("enter the user name:");
	scanf("%s",p1);
	printf("return the user:");
	scanf("%s",p2);
	if((strcmp(p1,p2)==0))
	{
		printf("username is valid");
	}
	else
	{
		printf("the username is invalid");
		
	}
	return 0;
	
}
