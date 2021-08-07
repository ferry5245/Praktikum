#include <stdio.h>
main(){
	int i,n,a;
	i=1;
	a=1;
	printf("Masukan N : "); scanf("%d",&n);
	while(i<=n){ //Tentukan variabelnya
		printf("%d ",a);
		a=a+2; //Tentukan variabelnya
		i++; //Tentukan operasinya
	}
}
