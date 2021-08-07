#include<stdio.h>
#include<string.h>
struct data{
    char nama[20];
    int nilai;
}mhs[1000], x;
main()
{
    int i, j, k, n;
    printf("===== INPUT =====\n");
    printf("Banyak Data : "); scanf("%d", &n);getchar();
    for(i=0;i<n;i++)
    {
        printf("Mahasiswa ke-%d\n",i+1);
		printf("Nama %d : ", i+1); gets(mhs[i].nama);
		printf("Nilai : "); scanf("%d", &mhs[i].nilai);getchar();
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(mhs[j].nilai>mhs[j+1].nilai)
            {
                x=mhs[j];
                mhs[j]=mhs[j+1];
                mhs[j+1]=x;
            }
        }
    }
    printf("\n===== OUTPUT =====\n");
    for(i=0;i<n;i++)
    {
        printf("%d. %s\n",i+1,mhs[i].nama);
    }
}
