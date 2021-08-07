#include<stdio.h>
struct 
{
	char string[100];
}a[1000];

int main()
{
	int b,i,n,x;
	printf("Masukkan Jumlah String : "); scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		{
			printf("String %d\t: ",n+1);fflush(stdin);gets(a[i].string);
			x=100;	
			b=strlen(a[i].string);
			if(b<x)
			{
				x=b;
			}
	}
	printf("\n====OUTPUT====\n\n");
	printf("String terpendeknya adalah %d", x);
	
	return 0;
	}
}
