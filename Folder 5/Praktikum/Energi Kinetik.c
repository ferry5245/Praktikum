#include <stdio.h>
void kinetik(float m, float v)
{
        float Ek;
        Ek=0.5*m*v*v;
        printf("Benda Tersebut Memiliki Energi Kinetik Sebesar %.2f Joule",Ek);
}
void main ()
{
        float x,y;
        printf("Masa Benda : ");
        scanf("%f",&x);
        printf("Kecepatan Benda : ");
        scanf("%f",&y);
        kinetik(x,y);
}
