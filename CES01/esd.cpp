#include <stdio.h>

int main() 
{
	
  int a,b,c;	//input
  int max, min;	//output
  	
  printf("inserisci tre interi: \n ");		//riechiedi dati di input all'utente
  scanf("%d%d%d", &a, &b, &c);
    
  if (a>b) 
  {					
  	if (a>c) 
  {									
  		max = a;								
  		if (c>b) 
  {								
  			min = b;							
  } 
  else 
  {								
		  	min = c;							
  }										
  } 
  else 
  {									
	  	max=c;									
	  	min=b;										
  }											
  } 
  else 
  {						//ALGORITMO
  	if (b>c) 
  {									
  		max = b;								
  		if (a>c) 
 {								
  			min=c;								
		  
 } 
 else 
 {								
		  	min=a;								
 }									
 } 
	  else 
 {									
	  	max=c;									
	  	min=a;									
 }											
 }													
  
  	
	printf("%d e' il minore \n %d e' il maggiore ", min, max);
	
	return 0;
	
}
