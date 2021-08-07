//Program menghitung rata-rata berat badan bayi
#include<stdio.h>
main(){
	int berat,i,n,jml=0,rata2;
	printf("Data bayi dalam suatu rumah sakit\n");
	printf("Banyak bayi : "); scanf("%d",&n); getchar();
	for(i=1;i<=n;i++){ //Tentukan sintaks dan kondisinya
		printf("Berat bayi %d\n",i);
		printf("   Berat (g) : "); scanf("%d",&berat);
		jml=jml+berat; //Lengkapi variabelnya untuk menjumlahkan berat
	}
	rata2=jml/n; //Lengkapi variabelnya untuk menghitung rata-rata berat badan bayi
	printf("Rata-rata berat badan bayi yang ada di rumah sakit adalah %d gram",rata2);
}
