#include "../ADT/queue/queue.h"
#include "../ADT/array/arraydin.h"
#include "./main_util.h"
#include <stdlib.h>
#include <stdio.h>
// start, load, save, quit, help

void start();
// I.S. Sembarang
// F.S. menjalankan program dengan melakukan load terhadap konfigurasi

void load();
// I.S. Program telah berjalan
// F.S. Menjalankan file yang telah tersimpan sebelumnya dari file eksternal

void save();
// I.S. Program telah berjalan
// F.S. Menyimpan file yang telah dijalankan ke dalam file eksternal

void help(){
    printf("Hai Hai Jangan Merasa Tersesat,\n");
    printf("Berikut adalah hal-hal yang bisa kamu lakukan :\n"); 
    printf("01. START           : untuk memulai BNMO\n"); 
    printf("02. LOAD <filename> : untuk membuka file yang berisi game\n");
    printf("03. SAVE <filename> : untuk menyimpan state game pemain saat ini ke dalam suatu file\n");
    printf("04. CREATEGAME      : untuk menambahkan game baru pada daftar game\n"); 
    printf("05. LISTGAME        : untuk menampilkan daftar game yang disediakan oleh sistem\n"); 
    printf("06. DELETEGAME      : untuk menghapus sebuah game dari daftar game\n"); 
    printf("07. QUEUE GAME      : untuk mendaftarkan permainan kedalam list\n"); 
    printf("08. PLAY GAME       : ntuk memainkan sebuah permainan\n"); 
    printf("09. QUIT            : untuk keluar dari program\n");
    printf("10. HELP            : untuk melihat informasi dari command-command\n");
}
// I.S. Program telah berjalan
// F.S. Menampilkan bantuan untuk penggunaan program

void quit(ArrayDin *arr)
{
    // DeallocateArrayDin(arr);
    printf("Game has ended\n");
    exit(0);
}
// I.S. Program sedang berjalan
// F.S. Keluar dari program dengan array telah didealokasikan

void otherCommand()
{
    printf("Command yang diberikan tidak sesuai yang diinginkan\n");
}
// I.S. Program sedang berjalan
// F.S. Menampilkan pesan bahwa command yang dimasukkan tidak valid