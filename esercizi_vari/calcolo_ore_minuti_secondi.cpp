/*********************************************************
File= calcola area e perimetro trapezio                  *
Autore= Bagli Andrea                                     *
Classe= 3H                                               *
Data= 07/10/2022                                         *
*********************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
	int base_min, base_mag, l1, l2, h; //dichiara input
    int perimetro, area; // output
	
	printf("inserisci base minore ");
	scanf("%d",& base_min);
	printf("inserisci la base maggiore ");
	scanf("%d",& base_mag);
	printf("inserisci il primo lato ");
	scanf("%d", & l1);
	printf (" inserisci il secondo lato ");
	scanf("%d",& l2);
	printf("inserisci l'altezza ");
	scanf("%d", & h);
	
	perimetro= base_mag + base_min + l1 + l2;
	area= ((base_min + base_mag) * h) /2;
	printf("il perimetro e' %d \n",  perimetro);
	printf(" l'area e' %d", area);
	return 0;
	

	
}
