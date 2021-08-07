//dengan switch case
#include <stdio.h> 
int main()
{
	int menu,a,b,tambah,kurang,kali,bagi; printf("Menu Operasi : \n"); 
	printf("[1] Penjumlahan\n");
	printf("[2] Pengurangan\n");
	printf("[3] Perkalian\n");
	printf("[4] Pembagian\n"); 
	printf("=================\n");
	printf("Pilih Menu : \n"); scanf("%d",&menu); 
	printf("Masukan Angka Pertama : "); scanf("%d",&a); 
	printf("Masukan Angka Kedua : "); scanf("%d",&b); 
	tambah=a+b; 
	kurang=a-b; 
	kali=a*b; 
	bagi=a/b;
	switch (menu)
	{
	case 1 : printf("Hasil dari %d + %d = %d",a,b,tambah); break; 
	case 2 : printf("Hasil dari %d - %d = %d",a,b,kurang); break;
	case 3 : printf("Hasil dari %d x %d = %d",a,b,kali); break;
	case 4 : printf("Hasil dari %d : %d = %d",a,b,bagi); break; 
	default : printf("Menu tidak tersedia");
	}
return 0;
}
