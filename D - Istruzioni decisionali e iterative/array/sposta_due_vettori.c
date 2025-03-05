#include <stdio.h>
#define N 7
void carica_array(int v []);
void stampa_array(int v []);
void sposta(int v[], int v2[]);
int main()
{
    int m[N];
    carica_array(N);
    stampa_array(N);
    sposta(N,N);
}

void carica_array(int v[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("dammi un nr");
        scanf("%d",&v[i]);
    }
}
void sposta(int v[N], int v2[N])
{
    for(int i=0, int j=N-1;i<N;i++,j--)
    {
        v[i]=v2[j];
    }
}
void stampa_array(int v[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ",v[i]);
    }
}