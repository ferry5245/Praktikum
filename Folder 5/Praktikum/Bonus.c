#include<stdio.h>
#include<math.h>
int perbandingan (int a, int b, int c, int d)
{

	if (a>b && a>c && a>d)
	{
		printf("%d",a);
	}
	else
	{
		printf("");
	}
	return a;
}
int main()
{
	int A,B,C,D,E;
	printf("Masukkan A = "); scanf("%d", &A);
	printf("Masukkan B = "); scanf("%d", &B);
	printf("Masukkan C = "); scanf("%d", &C);
	printf("Masukkan D = "); scanf("%d", &D);
	printf("Jadi, nilai terbesar dari bilangan tersebut adalah ");
	E=perbandingan(A,B,C,D);
	E=perbandingan(B,C,D,A);
	E=perbandingan(C,D,A,B);
	E=perbandingan(D,A,B,C);
	
	return 0;
}
