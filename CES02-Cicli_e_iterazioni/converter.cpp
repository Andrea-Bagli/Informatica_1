/** ****************************************************************************************
* \mainpage coverter.cpp
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*        L'utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit 
*        piu' significativo. Il programma dovra' visualizzare il numero decimale corrispondente. 
*        Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la 
*        libreria math.h.
* 
* @author Andrea Bagli
* @date 07/12/2022
*/
//inclusione librerie
#include <stdio.h>     
#include <math.h>

int main()  
{
    //diachiaro le variabili
    int bit, n=0, i=7;

    printf("inserisci 8 bit\n");    //richiedo l'inserimento di 8 bit

    do {
        scanf("%d", &bit);         
        n = n + pow(2, i) * bit;    //converto il singolo bit in decimale
        i--;                        
    } while (i>-1);                 

    printf("\nConversione in binario = %d\n", n);            //stampo risultato
    return 0;
}
