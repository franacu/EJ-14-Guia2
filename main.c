
#include "helper.h"
int main()
{
    Nodo *num1=newNodo(10);
    Nodo *num2=newNodo(9);
    Nodo *num3=newNodo(8);
    Nodo *num4=newNodo(7);
    Nodo *num5=newNodo(6);


    Lista *lista=newLista();
    agregarNumeros(num1,lista);
    agregarNumeros(num2,lista);
    agregarNumeros(num3,lista);
    agregarNumeros(num4,lista);
    agregarNumeros(num5,lista);
    Maximovalor(lista);
    Minimovalor(lista);
    EliminarValorMinMax(lista);

    return 0;
}
