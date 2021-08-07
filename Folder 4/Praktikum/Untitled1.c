#include<stdio.h>
int n,i;
void main()
{
    printf("Masukan angka : ");
    scanf("%d",&n);
    printf("faktor bilangan %d adalah : ",n);
    i=1;
    while (i<=n)
	{
        if (n%i == 0)
        printf("%d",i);
        i++;
    }
}
