#include<stdio.h>

int input,a,b,hasil;
void main()
{
	printf("====================================\n");
	printf("======= Kalkulator Sederhana =======\n");//7= dan 7=
	printf("====================================\n\n"); //35=//
	printf("Selamat Datang di Program Kalkulator Sederhana\n");
	
	printf("Masukkan a : ");
	scanf("%d", &a);
	printf("Masukkan b : ");
	scanf("%d", &b);
	
	printf("\nSilahkan masukkan kode operasi\n");
	printf("Menu Operasi : \n [1] Penjumlahan \n [2] Pengurangan \n");
	printf(" [3] Perkalian \n [4] Pembagian \n");
	printf("Kode Operasi : ");
	scanf("%d", &input);
	switch(input)
	{
		case 1:printf("\nKode Input : %d \n", input);
				printf("Operasi Penghitungan : Penjumlahan\n\n");
				hasil=a+b;
				printf("a+b \n= %d+%d \n= %d\n\n",a,b,hasil);
				printf("Maka Hasilnya adalah %d", hasil);
				break;
		
		case 2:printf("\nKode Input : %d \n", input);
				printf("Operasi Penghitungan : Pengurangan\n\n");
				hasil=a-b;
				printf("a+b \n= %d-%d \n= %d\n\n",a,b,hasil);
				printf("Maka Hasilnya adalah %d", hasil);
				break;
				
		case 3:printf("\nKode Input : %d \n", input);
				printf("Operasi Penghitungan : Perkalian\n\n");
				hasil=a*b;
				printf("a+b \n= %d*%d \n= %d\n\n",a,b,hasil);
				printf("Maka Hasilnya adalah %d", hasil);
				break;		
				
		case 4:printf("\nKode Input : %d \n", input);
				printf("Operasi Penghitungan : Pembagian\n\n");
				hasil=a+b;
				printf("a+b \n= %d:%d \n= %d\n\n",a,b,hasil);
				printf("Maka Hasilnya adalah %d", hasil);
				break;
			
		default : printf("\n\nMaaf Kode Input tidak dikenal \n\nPROCESS TERMINATED...");break;
	}
}
