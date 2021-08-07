#include<stdio.h>
#include<string.h>
struct tersedikit
{
    char string[100];
}z[1000];
void main()
{
    int a, i, n,x;
    printf("PENGHITUNG KALIMAT TERPENDEK\n\n");
    printf("===== INPUT =====\n");
    printf("Jumlah String : "); scanf("%d",&n);
    x=100;
    for(i=0;i<n;i++){
        printf("String %d : ",i+1); scanf("%s",z[i].string);
        a=strlen(z[i].string);
        if(a<x)
        x=a;
    }
    printf("\n===== OUTPUT =====\n");
    printf("Panjang String Terpendek : %d \n", x);
}
