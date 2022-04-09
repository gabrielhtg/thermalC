#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nama[200];

    printf("Masukkan nama anda: ");
    scanf("%[^\n]%*c", nama);
    system("clear");

    printf("\nHaloo, selamat datang di program konversi suhu ini %s.\n\n", nama);
    
    int awal;           // merupakan angka yang digunakan untuk menentukan satuan suhu awal
    int tujuan;         // merupakan angka yang digunakan untuk menentukan satuan suhu tujuan konversi
    char start[20];     // merupakan pendefenisian nama bantuan untuk output berupa string untuk satuan suhu awal
    char akhir[20];     // merupakan pendefenisian nama bantuan untuk output berupa string untuk satuan suhu tujuan
    double thermal;
    double hasil;
    char yesno[1];
    int iya;
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

        printf("\nBaik. Berarti kamu sekarang dalam satuan suhu %s.\n", start);
        printf("Kamu mau konversi ke satuan apa?\n\n");
        printf("    1. Celcius\n");
        printf("    2. Fahrenheit\n");
        printf("    3. Reamur\n");
        printf("    4. Kelvin\n");
        printf("Masukkan pilihan kamu sesuai dgn angkanya: ");
        scanf("%d", &tujuan);
        system("clear");

        if (tujuan == 1) {
            strcpy(akhir, "derajat Celcius");
        }

        else if (tujuan == 2) {
            strcpy(akhir, "derajat Fahrenheit");
        }

        else if (tujuan == 3) {
            strcpy(akhir, "derajat Reamur");
        }

        else if (tujuan == 4) {
            strcpy(akhir, "Kelvin");
        }

        printf("Baik. Berarti kamu akan mengonversi dari %s ke %s\n", start, akhir);
        printf("Sekarang, masukkan nilai suhu yang akan kamu konversi: ");
        scanf("%lf", & thermal);
        system("clear");

        if (awal == tujuan) {
            printf("Hasil koversinya adalah %0.2lf %s\n\n", thermal, akhir);
        }

        else if (awal == 1 && tujuan == 2) {
            hasil = ((thermal * 9) / 5) + 32;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 1 && tujuan == 3) {
            hasil = (thermal * 4) / 5;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 1 && tujuan == 4) {
            hasil = thermal + 273.15;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 2 && tujuan == 1) {
            hasil = ((thermal - 32) * 5) / 9;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 2 && tujuan == 3) {
            hasil = ((thermal - 32) * 4) / 9;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 2 && tujuan == 4) {
            hasil = (((thermal - 32) * 5) / 9) + 273.15;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 3 && tujuan == 1) {
            hasil = (thermal * 5) / 4;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 3 && tujuan == 2) {
            hasil = ((thermal * 9) / 4) + 32;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 3 && tujuan == 4) {
            hasil = ((thermal * 5) / 9) + 273.15;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 4 && tujuan == 1) {
            hasil = (thermal - 273.15);
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 4 && tujuan == 2) {
            hasil = (((thermal - 273.15) * 9) / 5) + 32;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
        }

        else if (awal == 4 && tujuan == 3) {
            hasil = ((thermal - 273.15) * 4) /5;
            printf("Hasil konversinya adalah %0.2lf %s\n\n", hasil, akhir);
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
