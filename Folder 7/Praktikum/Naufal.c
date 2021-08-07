#include <stdio.h>
#include <string.h>
main(){
	int i,j,k,n,temp;
	char nama[99][99],nim[99],kel[99],jur[99],temp1[99];
	printf("Masukkan Banyak Input : "); scanf("%d",&n);getchar();
	for(i=0;i<n;i++){
		printf("Data Mahasiswa Ke-%d :\n",i+1);
		printf("Nama\t: "); gets(nama[i]);
		//printf("NIM\t: ");gets(nim);
		//printf("Kelas\t: "); gets(kel);
		//printf("Jurusan : "); gets(jur);
	}
	for (i=n-1;i>=1;i++){
		for (j=1;j<=i;j++){
			if (strcmp(nama[j-1],nama[j])>0) // lengkapi syntax (variable)
			{
			strcpy(temp1,nama[j-1]);
 			strcpy(nama[j-1],nama[j]);
			strcpy(nama[j],temp1);
			}
		}
	}
	printf("\n=========RESULT=========\n");
	for (i=0;i<n;i++){
	printf("Data Mahasiswa Ke-%d :",i+1);
	printf("Nama\t: %s",nama[i]);
	//printf("NIM\t: %s",nim);
	//printf("Kelas\t: %s",kel);
	//printf("Jurusan : %s",jur);
	printf("===========================\n");
	printf("===========================\n");
	}
}


