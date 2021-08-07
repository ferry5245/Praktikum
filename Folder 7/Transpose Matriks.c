#include<stdio.h>

int main()
{
	int matriks[99][99],i,j,n,m;
	printf("Input jumlah baris : "); scanf("%d",&n);
	printf("Input jumlah kolom : "); scanf("%d",&m);
	printf("\tMATRIKS\n");
	//INPUT
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Input baris %d kolom %d : ",i+1,j+1); scanf("%d",&matriks[i][j]); //Tentukan variabel untuk indeksnya
		}
	}
	//OUTPUT
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",matriks[i][j]);//Lengkapi variabelnya
		}
		printf("\n"); //Sintaks untuk pindah ke baris baru
		}
		
	printf("\tTRANSPOSE MATRIKS\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matriks[j][i]);//Lengkapi variabelnya
		}
		printf("\n"); //Sintaks untuk pindah ke baris baru
		}
}
