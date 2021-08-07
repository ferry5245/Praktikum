#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int A,i,n,b=0,x;
	printf("====INPUT====\n\n");
	printf("Jumlah String (n) : "); scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		a[i]=a[i+b];
		x=(A-i);
		b++;
	for(i=0;i<n;i++)
	{
		printf("String %d : ",i+1); fflush(stdin);gets(a);
		A=strlen(a);
	
	}
	}
	for(i=0;i<n;i++)
	{
	if(x<b)
		{
			printf("Panjang String Terpendek : %d",A);
			break;
		}
	}
}
