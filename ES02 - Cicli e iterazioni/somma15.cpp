/** ****************************************************************************************
* \mainpage somma15.cpp
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali 
*        la cui somma è 15. 
* 
* @author Andrea Bagli'
* @date 02/12/2022
*/

#include <stdio.h>

int main() 
{
	int a, b;
	

    for(a=1; a<8; a++)

        for(b=1; b<15; b++)

            if(a+b==15)
                printf("%d + %d =15\n", a, b);


	return 0;
}
