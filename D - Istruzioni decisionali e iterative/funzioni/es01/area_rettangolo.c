#include <stdio.h>
int arearettangolo(int x, int y);
int main()
{
    int area,base,altezza;
    printf("dammi due numeri uno per la base e uno per l'altezza");
    scanf("%d%d",&base,&altezza);
    area=arearettangolo(base,altezza);
    return 0;
}
int arearettangolo(int x, int y)
{
    int m;
    m= x*y;
    printf("%d \n",m);
    return m;

}