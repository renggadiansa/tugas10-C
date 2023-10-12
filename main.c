#include <stdio.h>

//2
void triangular(int n);

//3
float kuadratan(float n);

int Cn(int n);

int Sn(int n);

//1
void menu() {
    printf("Pilihan menu\n");
}
int main() {
    //1
//    int input, i;
//
//    printf("Masukkan input: ");
//    scanf("%i", &input);
//
//    for (i = 1; i <= input; i++) {
//        menu();
//    }

    //2
//    int n;
//    printf("Masukkan bilangan: ");
//    scanf("%d", &n);
//    triangular(n);


    //3
//    float n, hasil;
//    printf("Masukkan sebuah angka yang akan dikuadratkan: ");
//    scanf("%f", &n);
//
//    hasil = kuadratan(n);
//    printf("Hasil kuadrat adalah %.2f\n\n", hasil);

    //4
    int n, hasil_Cn, hasil_Sn;

    printf("=====================================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);


    hasil_Cn = Cn(n);
    hasil_Sn = Sn(n);
    printf("Hasil Cn %d\n", hasil_Cn);
    printf("hasil Sn %d", hasil_Sn);
    return 0;
}

//4
int Cn(int n) {
    int i, hasil = 1;

    for (i = 0; i<n; i++){
        hasil = 2 * hasil + 1;
    }
    return hasil;
}

//4
int Sn(int n) {
    int i, hasil = 1;
    for (i = 0; i<n; i++) {
        hasil = hasil + n -1;
    }
    return hasil;
}

//3
float kuadratan(float n) {
    return n * n;
}

//2
void triangular(int bil) {
    int i, sum = 0;
    printf("Hasil penjumlahan Triangular: ");
    for(i=bil; i>0; i--) {
        printf("%d ", i);
        sum = sum + i;
        if (i != 1)
            printf("+ ");
    }
    printf("= %d \n", sum);
}

