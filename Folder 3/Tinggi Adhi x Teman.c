#include <stdio.h>

int main()
{
	int t1,t2,selisih;
	printf("Program Perbandingan Tinggi Badan Adhi dan Temannya(dalam cm)\n");
	printf("Tinggi Adhi\t= "); scanf("%d",&t1);
	printf("Tinggi Teman\t= "); scanf("%d",&t2);
	
	if (t1>t2)
	{
		selisih=t1-t2;
		printf("Tinggi Badan Adhi lebih tinggi %d cm", selisih);
	}
	else if (t1<t2)
	{
		selisih=t2-t1;
		printf("Tinggi Badan Teman Adhi Lebih Tinggi %d cm", selisih);
	}
	else printf("Tinggi badan Adhi dan Temannya sama, yaitu %d cm", t1);
	
	printf("\n\nTerima Kasih\n");
	return 0;
}
