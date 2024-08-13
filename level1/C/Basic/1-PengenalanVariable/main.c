// Standard library C
#include <stdio.h> // --> Standard Input Output
// Menyediakan fungsi untuk operasi input dan output dasar | Seperti membaca dan Menulis.
/*Contoh :
1. printf("Hello, World!\n);
2. scanf("%d", &num);
3. DST
*/

#include <stdlib.h> // Standard Library
// Menyediakan fungsi utilitas | seperti Konversi angka, Penangan proses dan operasi umum lainnya
/*Contoh :
1. int num = atoi("123"); --> Mengkonversi string ke tipe data angka
2. exit(0); --> Menghentikan program
3. DST
*/

// Ini adalah Fungsi (Main Function).
int main()
// int = Tipe value fungsi, mengembalikan integer
// main = Nama fungsi
// () = Tipe dan Nomer arguments --> Bisa di isi kosong

{ // --> Mulai
// Curly Braces{} = Untuk menunjukan dimana line code dimulai dan diakhiri.

    printf("Hello World");
    // printf = Digunakan untuk menampilkan hasil dari suatu code yang sudah ditulis.
    // Dalam C penulisan string (huruf), harus di tandai dengan double quotes "..." --> Agar menandakan dia adalah string.
    // Dalam C juga, disetiap akhir line penulisan code, diberi semi-colon (;)/ Titik koma. Agar tidak terjadi error.
    // printf("Hello World") --> INI AKAN ERROR.

    // Untuk menampilkan hasil code, kita juga dapat menggunakan sytax puts
    puts("This is Puts");
    // Bedanya jika puts, akan loncat langsung 1 line ketika dijalan kan, beda halnya dengan print. Jika print tidak ada 1 line loncat dibawahnya.
    puts("This 2 puts");

    // Maka jika menggunakan printf, biasanya di akhir ditambahkan /n --> untuk memberikan jika ingin turun 1 space/line.

    printf("aku di nomer 3 \n");

} // --> Berakhir
