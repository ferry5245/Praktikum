//Program menghitung luas dan keliling kotak
#include <stdio.h>
#include <stdlib.h>

int luas(int panjang, int lebar) // Tentukan parameter formalnya	 
{
    return (panjang*lebar);
}
int keliling(int panjang, int lebar) //fungsi untuk keliling
{
    return 2*(panjang+lebar);
}
int main()
{
    int p, l, luas(), keliling();
    printf("input Panjang : "); scanf("%d",&p);
    printf("input Lebar : "); scanf("%d",&l);

    printf("Luas Kotak = %d ", luas(p,l)); //Tentukan parameter aktualnya
    printf("\nKeliling Kotak = %d",keliling(p,l));
    return 0;
}
