#include<stdio.h>
#include<string.h>
char minuman[100][100];
int i,n;
char cari[100];
main (){
    printf("Banyak Minuman : ");
    scanf("%d",&n); getchar ();
    for (i=0;i<=n-1;i++){
        printf("Minuman di gelas %d : ",i+1); 
        gets(minuman[i]);    
    }
    printf("\\ n Minuman yang ingin dicari : "); 
    gets(cari);
    //proses sequential search
    i=0;
    while ((i<=n-1) && (strcmp(minuman[i],cari)!=0))
        i=i+1;
    if (strcmp(minuman[i],cari)==0){
        printf("\\ n%s terdapat di gelas %d \\ n",cari,i+1);    
    }
    else printf("\\ nMinuman tidak ditemukan");
}
