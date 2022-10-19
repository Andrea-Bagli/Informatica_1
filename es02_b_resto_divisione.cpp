/********************************************************************
File= visualiozza il resto della divisioni tra due numeri interi    *
Autore= Bagli Andrea                                                *
Classe= 3H                                                          *
Data= 30/09/2022                                                    *
********************************************************************/
#include <stdio.h>
int main()
{
	int num1, num2;
	int ris1, ris2;
	
	printf("inserisci il primo numero ");
	scanf("%d",&num1);
	
	printf("inserisci il secondo numero ");
	scanf("%d",&num2);
	
	//resto della divisione tra num1 e num2 
	ris1=num1%num2;
	ris2=num1/num2;
	printf("il risultato e' %d e il resto della divisone e' %d",ris2,ris1);
	
	return 0;
}
