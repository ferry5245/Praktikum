//Program pembelian buku menggunakan array of struct
#include<stdio.h>
main(){
	struct{
		char buku[50],kategori[50];
		int harga;
	}a[100];
	int i,n;
	printf("Jumlah buku yang dibeli : ");
	scanf("%d",&n); getchar();
	//Input
	printf("=====INPUT=====\n");
	for(i=0;i<n;i++){ //Tentukan insialisasinya
		printf("%d. Judul buku : ",i+1); gets(a[i].buku); //Lengkapi variabel untuk indeksnya 
		printf("   Harga buku : "); scanf("%d",&a[i].harga); getchar(); //Tentukan variabelnya
	}
	//Output
	printf("=====OUTPUT=====\n");
	for(i=0;i<n;i++){
		printf("%d. Judul buku : %s\n",i+1,a[i].buku);  
		printf("   Harga buku : %d\n",a[i].harga); //Lengkapi variabel struct-nya 
	}
}

