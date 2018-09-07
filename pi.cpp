/*
   This program will ask the user how many decimals he wants to see from the number pi
  
   Author: Victor Manuel Gastelum Huitzil
   Date: 6/09/18
   e-mail: A01411985@itesm.mx

 */

#include <stdio.h>
#include <math.h> // This library includes the pow function

int main() {

    //Declare the variables
    double pi; 
    int k; 
    
    pi=0;

    //Asks the user for the amount of decimals.
    printf("How many decimals do you want? "); 
    scanf("%d", &k);

    //This part will do a loop depending on the amount of decimals that the user inputs
    for (int i=0; i<=k; i++) {

        //Keep the values in pi
        pi+=((pow(16,-i))*(4/(8.0*i+1)-2/(8.0*i+4)-1/(8.0*i+5)-1/(8.0*i+6)));
    }

    //Print the number of decimals that the user indicated
    printf("%.*f", k, pi);

return 0;
}
