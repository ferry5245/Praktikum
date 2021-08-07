//Program pendataan buku
#include<stdio.h>
#include<string.h>
main(){
	int i,n;
	char buku[50][50];
	//Input
	printf("=====INPUT=====\n");
	printf("Jumlah buku yang ingin didata : ");
	scanf("%d",&n); getchar();
	for(i=0;i<n;i++){ //Tentukan operasi boolean yang ada pada kondisi
		printf("%d. Judul buku : ",i+1); gets(buku[i]);//Lengkapi variabel indeksnya
	}
	//Output
	printf("=====OUTPUT=====\n");
	for(i=0;i<n;i++){
		printf("%d. Judul buku : %s\n",i+1,buku[i]);//Tentukan variabel untuk judul bukunya 
	}
}

