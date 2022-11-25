#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // input
    int jam_masuk, jam_keluar, lama;

    system("cls");

    // input
    printf("jam masuk: "); scanf("%d", &jam_masuk);
    printf("jam keluar: "); scanf("%d", &jam_keluar);

    // proses
    if(jam_keluar >= jam_masuk){
        lama = jam_keluar - jam_masuk;
    }else{
        lama = (12-jam_masuk) + jam_keluar;
    }

    // output
    printf("\nLama bekerja adalah %d Jam", lama);

    getch();
    return 0;
}