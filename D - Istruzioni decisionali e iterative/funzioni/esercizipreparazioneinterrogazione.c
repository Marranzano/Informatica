/*
tipi di funzioni: int,float,char,void
questa è la dichiarazione di funzione o prototipo:
Una dichiarazione che specifica il nome della funzione, il tipo di ritorno e i parametri.
float media(int x, int y) 
tipo  nome   parametri
    
chiamata di funzione :
Esegue la funzione all'interno di un’altra funzione (es. main).
int main()
float r;   argomenti: valori passati alla funzione 
r=media (5,10) 5 e 10 sono gli argomenti

Definizione della Funzione:
Contiene il corpo della funzione con le istruzioni da eseguire.
Esempio:
int media(int x, int y)
{ int r;
r= (x+y)/2;
return r; }

passaggio per indirizzo per modificare anche parametro attuale
&=indirizzo di variabile
int main()
r=mcd(&a,&b)
int mcd(int*x, int*y)
cosi x concide con a e b con y
*/
