#include<stdio.h>
#include<string.h>
int    temp,i,j,n,nilai[99];
char nama[99][99],TEMP[99],TEMP2[99];
main(){
    printf("Banyak mahasiswa : "); 
    scanf("%d",&n); 
    for(i=0;i<n;i++){
        printf("Nama mhs %d : ",i+1); scanf("%s",&nama[i]);
        printf("Nilai : "); scanf("%d",&nilai[i]); 
        getchar();
    }
    for (i=n-1;i>=1;i--)
        for (j=1;j<=i;j++){
            if (nilai[j-1]>nilai[j]){
                temp=nilai[j-1];
                nilai[j-1]=nilai[j];
                nilai[j]=temp;
                strcpy(TEMP,nama[j-1]); strcpy(nama[j-1],TEMP2);
                strcpy(nama[j-1],nama[j]); strcpy(nama[j],TEMP2);
                strcpy(nama[j],TEMP); strcpy(TEMP,TEMP2);
            }
        }
    for (i=0;i<=n-1;i++){
        printf("%d. %s",i+1,nama[i]);
        printf("\
");
    }
}
