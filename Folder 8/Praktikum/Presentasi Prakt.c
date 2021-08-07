#include<stdio.h>
#include<string.h>
char makanan[100][100];
int i,n;
char cari[100];
main(){
    printf("Banyak Makanan : ");
    scanf("%d",&n); getchar ();
    for (i=0;i<=n-1;i++){
        printf("Makanan di piring %d : ",i+1); 
        gets(makanan[i]);    
    }
    printf("\
Makanan yang ingin dicari : "); 
    gets(cari);
//proses sequential search
    i=0;
    while ((i<=n-1) && (strcmp(makanan[i],cari)!=0))
        i=i+1;
    if (strcmp(makanan[i],cari)==0){
        printf("\\ n%s terdapat di piring %d \\ n",cari,i+1);    
    }
    else printf("\\ n Makanan tidak ditemukan");
}
