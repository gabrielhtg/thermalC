#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char nama[200];

    
    printf("Masukkan nama anda: ");
    scanf("%[^\n]%*c", nama);
    system("clear");
    
    

    printf("Haloo, selamat datang di program konversi suhu ini %s.\n\n", nama);

    int awal;
    char start[20];

    double celc;
    double fah;
    double ream;
    double kelv;
    double thermal;

    char celcius[] = "derajat Celcius";
    char fahrenheit[] = "derajat Fahrenheit";
    char reamur[] = "derajat Reamur";
    char kelvin[] = "Kelvin";

    char yesno[1];
    int iya = 0;
    int engga;

    while (iya == 0) {
        printf("Satuan suhu apa yang sekarang kamu gunakan?\n");
        printf("    1. Celcius\n");
        printf("    2. Fahrenheit\n");
        printf("    3. Reamur\n");
        printf("    4. Kelvin\n");
        printf("Masukkan pilihan kamu sesuai dgn angkanya: ");
        scanf("%d", &awal);
        system("clear");
        

        if (awal == 1) {
            strcpy(start, "derajat Celcius");
        }

        else if (awal == 2) {
            strcpy(start, "derajat Fahrenheit");
        }

        else if (awal == 3) {
            strcpy(start, "derajat Reamur");
        }

        else if (awal == 4) {
            strcpy(start, "Kelvin");
        }

        printf("Baik satuan awal kamu adalah %s\n", start);
        printf("Sekarang, masukkan nilai suhu yang akan kamu konversi: ");
        scanf("%lf", & thermal);
        system("clear");

        if (awal == 1) {
        fah = ((thermal * 9) / 5) + 32;
        ream = (thermal * 4) / 5;
        kelv = thermal + 273.15;
        printf("Satuan awal kamu adalah: %0.2lf %s\n\n", thermal, celcius);
        printf("Hasil konversinya ke Fahrenheit     : %0.2lf %s\n", fah, fahrenheit);
        printf("Hasil konversinya ke Reamur         : %0.2lf %s\n", ream, reamur);
        printf("Hasil konversinya ke Kelvin         : %0.2lf %s\n\n", kelv, kelvin);
    }

    else if (awal == 2) {
        celc = ((thermal - 32) * 5) / 9;
        ream = ((thermal - 32) * 4) / 9;
        kelv = (((thermal - 32) * 5) / 9) + 273.15;
        printf("Satuan awal kamu adalah: %0.2lf %s\n\n", thermal, fahrenheit);
        printf("Hasil konversinya ke Celcius    : %0.2lf %s\n", celc, celcius);
        printf("Hasil konversinya ke Reamur     : %0.2lf %s\n", ream, reamur);
        printf("Hasil konversinya ke Kelvin     : %0.2lf %s\n\n", kelv, kelvin);
    }
    
    else if (awal == 3) {
        celc = (thermal * 5) / 4;
        fah = ((thermal * 9) / 4) + 32;
        kelv = ((thermal * 5) / 9) + 273.15;
        printf("Satuan awal kamu adalah: %0.2lf %s\n\n", thermal, reamur);
        printf("Hasil konversinya ke Celcius    : %0.2lf %s\n", celc, celcius);
        printf("Hasil konversinya ke Fahrenheit : %0.2lf %s\n", fah, fahrenheit);
        printf("Hasil konversinya ke Kelvin     : %0.2lf %s\n\n", kelv, kelvin);
    }

    else if (awal == 4) {
        celc = (thermal - 273.15);
        fah = (((thermal - 273.15) * 9) / 5) + 32;
        ream = ((thermal - 273.15) * 4) /5;
        printf("Satuan awal kamu adalah: %0.2lf %s\n\n", thermal, kelvin);
        printf("Hasil konversinya ke Celcius    : %0.2lf %s\n", celc, celcius);
        printf("Hasil konversinya ke Fahrenheit : %0.2lf %s\n", fah, fahrenheit);
        printf("Hasil konversinya ke Reamur     : %0.2lf %s\n\n", ream, reamur);
    }

        printf("Apakah masih mau melakukan konversi?\n");
        printf("Yes (y) or no (n): \n");
        scanf("%s", &yesno);
        system("clear");
        

        iya =  strcmp("y", yesno);
        engga = strcmp("n", yesno);
        
        if (engga == 0) {
            break;
        }

        else if (iya != 0 && engga != 0) {
            break;
        }
    }

    if (engga == 0) {
        printf("Terima kasih telah menggunakan %s.\n", nama);
        
    }
    
    else if (iya != 0 && engga != 0) {
        printf("Invalid input. Jalankan ulang program ini %s.\n", nama);
        
    }

    return 0;
}

