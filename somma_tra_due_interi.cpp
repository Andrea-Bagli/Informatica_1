/* file: somma tra due interi
autore: baagli andrea
data: 21/09/22
*/

#include <stdio.h>
int main ()
{
	//dichiara variabile di input
	int num1, num2;
	//dichiara variabile output
	int ris;
	// input: due numeri interi
	printf("inserisci il primo numero");
	scanf("%d", &num1);
	printf("inserisci il secondo numero");
	scanf("%d", &num2);
	//assegnamo alla vaariabile ris il risultato della somma tra num1 e num2
	ris = num1 + num2;
	//output: un numero intero
	printf("il risultato e' %d" , ris);
	//termino il programma
	return 0;
	}


