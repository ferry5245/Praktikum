#include <stdio.h>

int main()
{
	int pil;
	char nama[50], nim[20];
	
	printf("\t\tPENDAFTARAN UKM\n");
	printf("Daftar UKM\n1. Basket\n2. Futsal\n\tPilihan : "); 
	scanf("%d",&pil); getchar();
	
	switch (pil) //Tentukan variable switch
	{
		case 1 :
			printf("\nMasukkan Nama : "); gets(nama); printf("\nMasukkan NIM  : "); gets(nim);
			printf("\nSelamat Bergabung ");break; //Tentukan syntax pemberhenti
		case 2:
			printf("\nMasukkan Nama : "); gets(nama); printf("\nMasukkan NIM  : "); gets(nim);
			printf("\nSelamat Bergabung ;)"); break;
		
		default : // case alternatif
			printf("\nUKM ngak ada :(");
	}
	return 0;
}
