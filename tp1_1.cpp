#include <stdio.h>

int main() {
    int var1 = 10, *pVar1 = &var1;
    printf("Contenido del puntero %d\n", *pVar1);
    printf("Direccion de memoria que almacena el puntero %p\n", pVar1);
    printf("Direccion de memoria de la variable %p\n", &var1);
    printf("Direccion de memoria del puntero %p\n", &pVar1);
    printf("El tamaño de memoria utilizado por la variable es %d bytes\n", sizeof(var1));

    getchar();
    return 0;
}