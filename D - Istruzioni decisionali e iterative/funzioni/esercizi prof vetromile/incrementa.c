#include <stdio.h>
void incrementa(int *x, int *y);
int main()
{
int a,b;
  printf("dammi due numeri");
    scanf("%d%d",&a,&b);
incrementa(a,b)
printf("%d",a)
}
void incrementa(int *x, int y);
{
    *x+=y;

}