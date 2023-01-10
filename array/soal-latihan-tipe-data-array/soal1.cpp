#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char kata[100]; int i;
    system("cls");
    printf("Input sebuah kata/kalimat : "); gets(kata);
    printf("Dibalik menjadi : ");
    for(i=strlen(kata); i>=0; i--){
        printf("%c",kata[i]);
    }
    getch();
    return 0;
}
