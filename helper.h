//
// Created by Fran on 21/05/2024.
//

#ifndef EJ14_GUIA2_HELPER_H
#define EJ14_GUIA2_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int num);
Lista *newLista();
void agregarNumeros(Nodo*nodoAI,Lista *lista);
void Maximovalor(Lista *lista);
void Minimovalor(Lista *lista);
void EliminarValorMinMax(Lista *lista);

#endif //EJ14_GUIA2_HELPER_H
