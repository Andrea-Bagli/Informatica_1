/** ****************************************************************************************
* \mainpage media_numeri.cpp
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri 
*        inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento 
*        dei dati.
* 
* @author Andrea Bagli'
* @date 07/12/2022
***********************************************************************************************/

#include <stdio.h>      //inclusione librerie

int main() 
{

	int n, c=0, somma=0;        //dichiaro  variabili intere 
    float media=0;              //dichiaro variabili 

    do 
    {                                           //ciclo richiesta input e somma numeri inseriti
        printf("Insersici un numero: ");
        scanf("%d", &n);

        media += n;

        if(n!=0) 
            c++;                                
    } while (n!=0);                         

    media /= c;                 //calcolo media

    printf("\nLa media dei numeri e' %.2f\n", media);
    
    return 0;
}
