#include <stdio.h>
void potensial(float m, float h)
{
        float Ep;
        Ep=m*9.8*h;
        printf("Benda Tersebut Memiliki Energi Potensial Sebesar %.2f Joule",Ep);
}
void main ()
{
        float x,y;
        printf("Masa Benda : ");
        scanf("%f",&x);
        printf("Tinggi Benda : ");
        scanf("%f",&y);
        potensial(x,y);
}
