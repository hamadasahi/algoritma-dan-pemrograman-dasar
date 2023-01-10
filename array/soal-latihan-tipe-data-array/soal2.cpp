#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
main()
{
    char kata[100], word; int i, vokal=0, konsonan=0;
    system("cls");
    printf("Input sebuah kata/kalimat : "); gets(kata);
    for(i=0; i<strlen(kata); i++){
        word=toupper(kata[i]);
        if(word=='A' || word=='I' || word=='U' || word=='E' || word=='O'){
            vokal++;
        }else{
            konsonan++;
        }
    }
    printf("\nJumlah huruf vokal %d",vokal);
    printf("\nJumlah huruf konsonan %d",konsonan);
    getch();
    return 0;
}
