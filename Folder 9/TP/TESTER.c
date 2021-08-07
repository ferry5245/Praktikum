#include<stdio.h>

int deret(int a,int b,int c);
int sum(int z,int y);
int d[99];

void main()
{
 int n,beda,i=0,der,jml;
 printf("====PROGRAM DERET ARITMATIKA====\n\n");
 printf("\t----INPUT----\n\n");
 printf("Panjang Deret\t: "); scanf("%d",&n);
 printf("Beda Nilai\t: ");scanf("%d",&beda);
	
 printf("\n\t---OUTPUT---\n");
 printf("\nDERET : \n");
 der=deret(n,beda,i);
 printf("\n\n");
 jml=sum(n,beda);
 printf("Hasil Penjumlahan Deret tsb adalah %d",jml);
 getchar();
}

int deret(int a,int b,int c)
{
 if(a==0) return 1;
 else if(a>0)
 {
  d[c]=(c+1)*b;
  printf("%d ",d[c]);
 }
 return deret(a-1,b,c+1);
}

int sum(int z,int y)
{
 int hasil=d[z];
 if(z==0) return y;
 else if(z>0){
 return hasil+sum(z-1,y);
 }
}
