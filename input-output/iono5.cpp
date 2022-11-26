#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int day, year, moon, days;

    system("cls");
    printf("Hari dikerjakannya project : "); scanf("%d",&day);
    year = day / 365;
    moon = (day % 365) / 12;
    days = day - ((365*year)+(30*moon));

    printf("Project dikerjakan selama %d tahun, %d bulan, %d hari.",year,moon,days);

    getch();
    return 0;
}