#include <stdio.h>

int main() 
{
  	int a,b;
  	printf("Inserisci due interi: \n ");
  	scanf("%d%d", &a, &b);
  
  	if(a==b) 
	{
    	printf("i numeri sono uguali");
  	} 
  	else 
  	{
    if(a>b)
	{
      printf("%d e' maggiore di %d", a, b);
    } 
	else 
	{
      printf("%d e'maggiore di %d", b, a);
  	}
 
	}
	return 0;
}

