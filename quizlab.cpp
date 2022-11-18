#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    char jawab,nama[30];
    int lb,sm,gp,gk,tsi,ta,anak,pinjam,ppn,gaji;
    system("cls");
    do
    {
        printf("================================");
        printf("\nNama karyawan : "); scanf("%s",&nama);
        printf("Lama bekerja (tahun): "); scanf("%d",&lb);
        printf("Status perkawinan (0, jika belum  menikah. 1, jika sudah menikah : ");
        scanf("%d",&sm);
        printf("Pinjaman : ");
        scanf("%d",&pinjam);
        if(lb>=0 && lb<2){
            gp=3000000;
        }else if(lb>=2 && lb<=5){
            gp=4000000;
        }else{
            gp=5000000;
        }

        if(sm==0){
            tsi=0;
            ta=0;
        }else if(sm==1){
            tsi=gp*15/100;
            printf("Tanggungan anak : "); scanf("%d",&anak);
            if(anak>3)
            {
                ta=tsi*15/100*anak;
            }else{
                ta=tsi*10/100*anak;
            }
        }else{
            printf("Masukan kode status yang sesuai [0 atau 1].");
        }

        gk=gp+tsi+ta;
        ppn=gk*25/1000;
        gaji=gk-ppn-pinjam;

        printf("\nHasil perhitungan gaji karyawan");
        printf("\n--------------------------------");
        printf("\nAtas nama karyawan     = %s",nama);
        printf("\nGaji Bersih            = %d",gaji);
        printf("\nGaji pokok             = %d",gp);
        printf("\nTunjangan suami istri  = %d",tsi);
        printf("\nTunjangan anak         = %d",ta);
        printf("\nPPn                    = %d",ppn);
        printf("\n\nHitung gaji bersih karyawan lain? [Y/T] = "); scanf("%s",&jawab); fflush(stdin);
    } while (jawab=='y' || jawab=='Y');
    getch();
    return 0;
}