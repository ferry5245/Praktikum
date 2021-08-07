#include<stdio.h>
int hasil;
int bakteri(int dtk)
{
	if(dtk==0) return 1;
	else if(dtk>0)
	{
		hasil=2*bakteri(dtk-1);
	}
	return hasil;
}

int main()
{
	int byk,d;
	printf("Detik Perkembangan Bakteri : ");scanf("%d",&d);
	d=d/2;
	byk=bakteri(d);
	printf("Jumlah Bakteri adalah %d",byk);
	return 0;
}
