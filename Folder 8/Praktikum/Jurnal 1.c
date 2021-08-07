//Sequential search
#include<stdio.h>
main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0,cari;
	printf("Angka yang dicari : "); scanf("%d",&cari);
	while(i<10 && a[i]!=cari){ //Lengkapi operasi boolean dan variabelnya
		i++;
	}
		if(a[i]==cari){ //Lengkapi operasi boolean-nya
			printf("Data ditemukan di indeks ke-%d",i);
		} else{
		printf("Data tidak ditemukan");
	}
}
