#include<stdio.h>
#include<string.h>
#define N 50
main()
{
	int i,s,len;
	char name[N];
	printf("\n enter your name: ");
	scanf("%s",&name);
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		s=(int)name[i]-32;
		printf("%c",s);
	}

}
