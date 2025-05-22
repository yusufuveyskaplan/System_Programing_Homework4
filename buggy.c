#include <stdio.h>
#include <stdlib.h>


// 1) Struct tanımları
typedef struct {
    int a;
    int *pa;
    int b;
} Foo1;

typedef struct {
    int a;
    int b;
    int *pa;
} Foo2;

// 2) Global değişkenler (istersen main içinde de tanımlayabilirsin)
Foo1 f1;
Foo2 f2;

// 3) Örnek bir fonksiyon
void initialize(int *data) {
    *data = 100; // Burada NULL işaretçi üzerinden erişim yapıyordun, main'de artık bellek ayırıyoruz
}

int main() {
    // Bellek ayırma
    int *value = malloc(sizeof(int));
    if (value == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Fonksiyonu çağır
    initialize(value);

    // Çıktı
    printf("Value: %d\n", *value);

    // Belleği serbest bırak
    free(value);

    return 0;
}
