/** ****************************************************************************************
* \mainpage fattoriali.cpp
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla 
*        tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato 
*        con la seguente formula: n! = n �(n�1)�(n�2)� ... �2 �1.
* 
* @author Andrea Bagli
* @date 06/12/2022
*/

#include <stdio.h>      //includo le librerie

int main()  
{

    //diachiaro le variabili
    int n, i;        

    printf("Bagli Andrea\n");    //richiesta numero
    printf("Inserisci un numero: ");    //richiesta numero
    scanf("%d", &n);
    printf("Calcolo del fattoriale di: %d\n", n);    //richiesta numero

    if(n>0) 
	{   //controllo se il numero e' positivo
        for(i=n-1; i>0; i--) 
		{
            printf("n*=i = %d\n", n); 
            n *= i;             //moltiplico il numero per tutti i numeri sottostanti
        }

        printf("\nIl fattoriale del numero inserito e' %d\n\n", n);     //stampo il risultato
    }
    else 
	{
        printf("\nNon e' possibile calcolare il fattoriale di un numero negativo\n\n");     //nel caso il numero fosse negativo
    }
    
    return 0;  //fine programma
}

