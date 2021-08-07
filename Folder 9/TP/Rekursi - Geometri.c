#include<stdio.h>

int deret(int a,int b,int c,int d);
int sum(int z,int y);
int g[99];

void main()
{
	int n,rasio,i=0,der,jml;
	printf("====PROGRAM DERET GEOMETRI====\n\n");
	printf("\t----INPUT----\n\n");
	printf("Panjang Deret\t: "); scanf("%d",&n);
	printf("Nilai Rasio\t: ");scanf("%d",&rasio);
	
	printf("\n\t---OUTPUT---\n");
	printf("\nDERET : \n");
	der=deret(n,rasio,rasio,i);
	jml=sum(n,rasio);
	printf("\n\nHasil Penjumlahan Deret tsb adalah %d",jml);
}

int deret(int a,int b,int c,int d)
{
	if(a==0) return 1;
	else if(a>0)
	{
		g[d]=b;
		printf("%d ",g[d]);
	}
	return deret(a-1,b*c,c,d+1);
}

int sum(int z,int y)
{
	int hasil=g[z];
	if(z==0) return y;
	else if(z>0)
	{
		return hasil+sum(z-1,y);
	}
}
