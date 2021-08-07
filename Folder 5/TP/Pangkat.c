#include<stdio.h>
#include<math.h>
int pangkat(int,int);

void main()
{
	int a,b;
	printf("======PROGRAM PEMANGKATAN======\n\n");
	printf("----INPUT----\n");
	printf("Masukkan Nilai   : "); scanf("%d", &a);
	printf("Masukkan Pangkat : "); scanf("%d", &b);
	printf("\n\n----OUTPUT----\n");
	printf("Hasil pemangkatannya adalah %d", pangkat(a,b));
}
int pangkat(int x,int y)
{
	int hasil;
	hasil=pow(x,y);
	return hasil;
}
