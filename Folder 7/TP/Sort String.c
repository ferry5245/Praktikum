#include<stdio.h>
#include<string.h>

void main()
{
	char string[100][100];
	char temp[99];
	int n,i,j;
	printf("======INPUT======\n\n");
	printf("Jumlah String : ");scanf("%d",&n);getchar();
	
	for(i=0;i<n;i++)
	{
		printf("String %d : ",i+1);gets(string[i]);
	}
	for(i=n-1;i>=1;i--)
	for(j=1;j<=i;j++)
	{
		{
			if(strcmp(string[j-1],string[j])>0) {
			strcpy(temp,string[j-1]);
			strcpy(string[j-1],string[j]);
			strcpy(string[j],temp);
			}
		}
	}
	printf("\n\n======OUTPUT======\n\nHasil Pengurutan : \n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\n",string[i]);
	}
}
