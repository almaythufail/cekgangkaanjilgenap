/*Program Pengecekan Bilangan Ganjl atau Genap 1-1000
Al May Nabith Thufail
5010221007
Departemen Teknik Sistem dan Industri
Tugas 03 - Algoritma dan Pemrograman Komputer (D)*/

#include <stdio.h>
#include <stdbool.h>

int main () {
    
    int n;   
    bool status= true;
    printf ("Selamat Datang di Program Pengecekan Bilangan Ganjil atau Genap dalam Rentang 1-1000\n");
    while (status) {
        printf ("Masukkan Satu Bilangan Yang Ingin dicek: ");
        scanf ("%d", &n);
        printf ("\n");

        if (0 < n && n <=1000) {
            if (n %2 == 0) {
            printf ("Angka yang kamu pilih %d adalah GENAP\n", n);
            status = false;
            } else {
            printf ("Angka yang kamu pilih %d adalah GANJIL\n", n);
            status = false;
            } 
        } else {
            printf ("Proses Pengecekan Salah, Silakan Cek Kembali Syarat Pengecekan\n\n");
        }
    }
}