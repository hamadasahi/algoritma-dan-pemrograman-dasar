#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void fungsi_input(void);
float celcius;
float fahrenheit(float c);
main()
{
    system("cls");
    fungsi_input();
    printf("\nSuhu dalam fahrenheit = %.2f",fahrenheit(celcius));
}

void fungsi_input(void){
    printf("Nilai suhu dalam celcius : "); scanf("%f",&celcius);
}

float fahrenheit(float c){
    return(c * 9/5 + 32);
}
