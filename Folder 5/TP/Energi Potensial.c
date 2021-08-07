#include<stdio.h>
int ep,m,h;
void potensial(int F)
{
	ep=m*10*h;
}

void main()
{
	int F;

	printf("===PROGRAM PENGHITUNG ENERGI POTENSIAL===\n\n");
	printf("====INPUT====\n");
	printf("Percepatan Gravitasi\t\t: 10 \n");
	printf("Masukkan Massa Benda\t\t: "); scanf("%d", &m); potensial(F);
	printf("Masukkan Ketinggian Benda\t: "); scanf("%d", &h); potensial (F);
	printf("\n\n====OUTPUT====\n");
	printf("Energi Potensial Benda adalah %d", ep);
	potensial(ep);
}
