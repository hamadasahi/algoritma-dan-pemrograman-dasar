#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//program konversi suhu
float celcius;
void scancelcius(void);
float konversi(void);
main()
{
    system("cls");
    scancelcius();
    konversi();
    getch();
}

void scancelcius(void)
{
    printf("PROGRAM KONVERSI SUHU\n");
    printf("Masukkan nilai suhu dalam celcius : "); scanf("%f",&celcius);
}

float konversi(void)
{
    float reamur, fahrenheit, kelvin;
    fahrenheit = celcius * 9/5 + 32;
    reamur = celcius * 4/5;
    kelvin = celcius + 273;
    printf("\nNilai suhu dalam fahrenheit = %.2f",fahrenheit);
    printf("\nNilai suhu dalam reamur     = %.2f",reamur);
    printf("\nNilai suhu dalam kelvin     = %.2f",kelvin);
}