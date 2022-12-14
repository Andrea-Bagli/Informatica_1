/***************************************************
file: equazioni.c                                  *
autore: bagli andrea							   *
data10/10/2022                                     *                           
***************************************************/
#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, d, x;  //input
  float risultato;      //output
  
  printf(" risoluzione equazione -ax^3 + bx^2 - cx + d\n");   //stampa descrizione
  
  printf("Inserisci il valore di a: ");   //primo coefficente
  scanf("%f", &a);

  printf("Inserisci il valore di b: ");   //secondo coefficente
  scanf("%f", &b);
  
  printf("Inserisci il valore di c: ");   //terzo coefficente
  scanf("%f", &c);
  
  printf("Inserisci il valore di d: ");   //quarto coefficiente
  scanf("%f", &d);
  
  printf("Inserisci il valore di x: ");   //valore di x
  scanf("%f", &x);
  
  risultato = (-a*(pow(x,3)) + b*(pow(x,2)) - c*x + d); //calcolo risultato
  
  printf("\n Il risultato e' %.2f", risultato);   //scrittura risultato
  return 0;
}

