/*******************************************************************************************************
* \mainpage divisori_numero.cpp																		   *
*																									   *
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.      *
* 																									   *
* @author Bagli Andrea																				   *
*																									   *
* @date 02/12/2022																					   *
********************************************************************************************************/

#include <stdio.h>

int main() 
{
	int n, a;              //dichiaro variabili
	
	printf("Inserisci un numero: ");                     //richiedo input
	scanf("%d", &n);
	
	for(a = 2; a <= n/2; a++)                           // calcolo dei divisori 
	{
		if(n%a==0)
			printf("%d e' un divisore\n", a);           //stampo output
	}
	
	return 0;	                                        //fine programma
}


