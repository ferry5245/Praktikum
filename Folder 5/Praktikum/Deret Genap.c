#include<stdio.h>

void deret (int n)
{
	int i=1,x=0;
	while(i<=n); {
		x=x+2;
		printf("%d ",x);
		i++;
	}
	
}

void main()
{
	int a;
	printf("Masukkan Banyak Bilangan Genap yang Diinginkan : ");
	scanf("%d",&a);
	deret(a);
}

