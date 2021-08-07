#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int i,b=0;
	printf("====INPUT===\n");
	printf("Masukkan String Anda : ");gets(a);
	for(i=0;a[i];i++)
	{
		a[i]=a[i+b];
		if(a[i]==' '||a[i]=='\t')
		{
			i--;
			b++;
		}
	}
	printf("\n====OUTPUT====\n\n");
	printf("String Tanpa Spasi : %s",a);
	
	return 0;
}
