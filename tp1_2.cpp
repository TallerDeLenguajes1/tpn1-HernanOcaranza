#include <stdio.h>

int Cuadrado (int num) {
    return num * num;
}

void CuadradoVoid (int *pNum) {
    *pNum *= *pNum;
}

void MostrarDireccion (int *pVar) {
    printf("la direccion de la variable es: %p\nEl contenido es %d\n", pVar, *pVar);
}

void Invertir (int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void Ordenar (int *a, int *b) {
    if (*b < *a) Invertir (a,b);
}

void MostrarOrdenados (int a, int b) {
    Ordenar (&a, &b);
    printf("%d\n%d",a ,b);
}

int main() {
    int num1 = 10, num2 = 6;
    //printf("%d", Cuadrado(num1));
    //CuadradoVoid(&num1); printf("%d", num1);
    //MostrarDireccion(&num1);
    //Invertir(&num1, &num2); printf("%d    %d", num1 , num2);
    //Ordenar(&num1, &num2); printf("%d    %d", num1 , num2);
    //MostrarOrdenados(num1 ,num2);
    getchar();
    return 0;
}