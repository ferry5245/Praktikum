#include<stdio.h>

int power(int a,int b);

void main()
{
	int bil,pkt,hasil;
	printf("====PROGRAM PEMANGKATAN====\n\n");
	printf("\t----INPUT----\n\n");
	printf("Masukkan Bilangan : ");scanf("%d",&bil);
	printf("Masukkan Pangkat  : ");scanf("%d",&pkt);
	hasil=power(bil,pkt);
	printf("\n\t----OUTPUT----\n\n");
	printf("\nHasil %d Pangkat %d adalah %d\n\n",bil,pkt,hasil);
}

int power(int a,int b)
{
	if(b==0) return 1;
	else if(b>0)
	{
		return a*power(a,b-1);
	}
}
