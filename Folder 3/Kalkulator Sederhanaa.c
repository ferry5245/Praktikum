// dengan if else:
#include <stdio.h> 
int main()
{
	int menu,a,b,tambah,kurang,kali,bagi; //Variabel//
	printf("Menu Operasi : \n");
	printf("[1] Penjumlahan\n[2] Pengurangan\n[3] Perkalian\n[4] Pembagian\n"); 
	printf("=================\n");
	printf("Pilih Menu : "); scanf("%d",&menu);
	printf("Masukan Angka Pertama : "); scanf("%d",&a);
	printf("Masukan Angka Kedua : "); scanf("%d",&b);
	tambah=a+b; 
	kurang=a-b; 
	kali=a*b; 
	bagi=a/b;
	
	//Selection//
	if (menu==1)
	{
		printf("Hasil dari %d + %d = %d",a,b,tambah); 
	}
	else if (menu==2)
	{
		printf("Hasil dari %d - %d = %d",a,b,kurang);
	}
	else if (menu==3)
	{
		printf("Hasil dari %d x %d = %d",a,b,kali); 
	}
	else if (menu==4)
	{
		printf("Hasil dari %d : %d = %d",a,b,bagi);
	}
	else printf("Menu Yang Anda Inginkan Tidak Tersedia"); 
	return 0;
}


