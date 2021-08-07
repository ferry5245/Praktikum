#include<stdio.h>

int main()
{
	int input;
	int a,b,hasil;
	printf("===================================\n");
	printf("=======Kalkulator Sederhana=======\n");
	printf("===================================\n\n");
	
	printf("Selamat Datang di Program Kalkulator Sederhana\n");
	printf("Masukkan a : "); scanf("%d",&a);
	printf("Masukkan b : "); scanf("%d",&b);
	
	printf("\nSilahkan Pilih Menu Kalkulator di Bawah\n");
	printf("Menu Operasi : \n");
	printf("[1] Penjumlahan \n [2] Pengurangan \n [3] Perkalian \n [4] Sisa Hasil Bagi \n");
	printf("Pilih Operasi : "); scanf("%d",&input);
	
	switch(input)
	{
		case 1 : 
		printf("\n\nMenu Pilihan : %d \n",input);
		printf("Operasi : Penjumlahan\n");
		hasil=a+b;
		printf("\nHasil Penjumlahan \na + b \n= %d + %d \n= %d", a,b,hasil);
		printf("\n\nTerima Kasih\n");
		break;
		
		case 2 : 
		printf("\n\nMenu Pilihan : %d \n",input);
		printf("Operasi : Pengurangan\n");
		hasil=a-b;
		printf("\nHasil Pengurangan \na - b \n= %d - %d \n= %d", a,b,hasil);
		printf("\n\nTerima Kasih\n");
		break;
		
		case 3 : 
		printf("\n\nMenu Pilihan : %d \n",input);
		printf("Operasi : Perkalian\n");
		hasil=a*b;
		printf("\nHasil Perkalian \na * b \n= %d * %d \n= %d", a,b,hasil);
		printf("\n\nTerima Kasih\n");
		break;	
		
		case 4 : 
		printf("\n\nMenu Pilihan : %d \n",input);
		printf("Operasi : Sisa Hasil Bagi\n");
		hasil=a%b;
		printf("\nSisa Hasil Bagi \na / b adalah %d",hasil);
		printf("\n\nTerima Kasih\n");
		break;
		
	}
	
	return 0;
}
