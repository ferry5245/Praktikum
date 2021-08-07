//Program perpangkatan
#include<stdio.h>
main(){
	int i,n,a,p;
	printf("Input Angka : "); scanf("%d",&a);
	printf("Input Pangkat : "); scanf("%d",&n);
	p=1;
	i=1;
	do{ //Tentukan sintaksnya
		p=p*a; //Tentukan variabelnya
		i++;
	} while(i<=n);
	printf("%d pangkat %d adalah %d",a,n,p); //Tentukan variabelnya
}
