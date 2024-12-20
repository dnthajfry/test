#include <stdio.h>


int menghitungCara(int n) {
    int atas[46] = {0};   
    int bawah[46] = {0}; 

    atas[1] = 1;  
    bawah[1] = 0;

    for (int i = 2; i <= n; i++) {
        atas[i] = atas[i - 1] + bawah[i - 1];
        bawah[i] = atas[i - 1];               
    }

    return atas[n];
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", menghitungCara(n));

    return 0;
}
