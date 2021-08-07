#include<stdio.h>

void main()
{
	int angka;
	printf("Program Klasifikasi Angka\n\n");
	printf("Silahkan Masukkan Angka di Bawah (Satuan-Ribuan)\n");
	printf("Masukkan Angka : "); scanf("%d", &angka);
	
	if (angka>=1&&angka<=9)
		{
			printf("Bilangan %d merupakan Satuan", angka);
		}
	else if (angka>=11&&angka<=19)
		{
			printf("Bilangan %d merupakan Belasan", angka);
		}
	else if (angka==10||angka>=20&&angka<=99)
		{
			printf("Bilangan %d merupakan Puluhan", angka);
		}
	else if (angka>=100&&angka<=999)
		{
			printf("Bilangan %d merupakan Ratusan", angka);
		}
	else if (angka>=1000&&angka<=999999)
		{
			printf("Bilangan %d merupakan Ribuan", angka);
		}
	else printf("Bilangan tak dikenal atau di luar jangkauan");
	
}
