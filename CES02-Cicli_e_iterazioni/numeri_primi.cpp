/** ****************************************************************************************
* \mainpage fattoriali.cpp
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla 
*        tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato 
*        con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
* 
* @author Andrea Bagli
* @date 07/12/2022
*/

#include <stdio.h>      //inclusione librerie

int main()  
{

    //diachiaro le variabili
    int n, i;        

    printf("Inserisci un numero: ");    //richiesta numero
    scanf("%d", &n);

    if(n>0) {                           //controllo se il numero è positivo
        for(i=n-1; i>0; i--) {
            n *= i;                     //moltiplico il numero per tutti i numeri minori di esso
        }

        printf("\nIl fattoriale del numero inserito e' %d\n\n", n);     //stampa risultato
    }
    else {
        printf("\n Non e' possibile calcolare il fattoriale di un numero negativo\n\n");     //eccezione numero negativo
    }
    
    return 0;
}
