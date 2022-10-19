/*
file: secondi.c
autore: Bagli Andrea
classe: 3°H
data: 6/10/2022
Leggi in input un numero di secondi e trasformali in ora, minuti e secondi 
Input: secondi
Elaborazione: calcolo ore, minuti e secondi
Output: ore, minuti e secondi
*/

#include <stdio.h>

int main() {
  int secondiIniziali;  //input
  int ore, minuti, secondi;  //output
  
  printf("Inserisci il numero di secondi: ");   //chiedi input
  scanf("%d", &secondiIniziali);  //leggi input
  
  minuti = (secondiIniziali - secondiIniziali % 60) / 60; //calcolo minuti totali
  ore = (minuti - minuti % 60) / 60;  //calcolo ore
  secondi = secondiIniziali % 60;   //calcolo minuti 
  minuti = minuti % 60;     //calcolo secondi 
  
  printf("%d secondi = %d h, %d m, %d s", secondiIniziali, ore, minuti, secondi); //risultato
  return 0;
}

