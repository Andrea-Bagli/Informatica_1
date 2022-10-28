#include <stdio.h>

int main() 
{
  float importoIniziale;
  float importofinale;
  
  printf("Inserisci ammontare della spesa: ");
  scanf("%f", &importoIniziale);
  
    if (importoIniziale>50)
{
    if(importoIniziale>100) 
{
	importofinale = importoIniziale/100*90;
} 
	else 
{
    importofinale = importoIniziale/100*95;
}
    printf("L'importo scontato e' %.2f", importofinale);
}
 else 
 {
  printf("L'importo e' troppo piccolo per applicare lo sconto");
}
return 0;
}
