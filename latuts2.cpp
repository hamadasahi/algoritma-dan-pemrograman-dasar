#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int celcius, fahrenheit;
    float reamur;

    system("cls");
    printf("Konversi suhu");
    printf("\n\nMasukkan suhu dalam satuan celcius : ");
    scanf("%d",&celcius);
    
    fahrenheit=celcius+273;
    reamur=(float)4/5*celcius+32;

    printf("\nNilai suhu adalah %d derajat Fahrenheit",fahrenheit);
    printf("\nNilai suhu adalah %.2f derajat Reamur",reamur);
    
    getch(); 
    return 0;
}
