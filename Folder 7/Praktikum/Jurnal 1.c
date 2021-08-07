#include <stdio.h>
#include <stdlib.h>

int main()
{
int kom[50], sem, i, j, n;
    printf("Insertion sort \nMasukkan banyak data : "); scanf("%d", &n);
    for(i=0;i<n;i++){
    	printf("%d. ", i+1); scanf("%d",&kom[i]);}

    printf("\nSebelum: ");

    for(i=0;i<n;i++){printf("%d ",kom[i]);}

    for(i=1;i<n;i++){
        sem=kom[i];
        j=i-1;
        while((kom[j+1]<kom[j])&&(j>=0)) //lengkapi syntax
       { 
            kom[j+1]=kom[j];
            j=j-1;
        }
        kom[j+1]=sem; //lengkapi syntax
    }

    printf("\nSetelah : ");
    for(i=0;i<n;i++){printf("%d ",kom[i]);}
    printf("\n");
}

