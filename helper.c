//
// Created by Fran on 21/05/2024.
//
#include "helper.h"
#include "stdlib.h"
#include "stdio.h"

Nodo *newNodo(int num)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        return NULL;
    }else
        {
            aux->num=num;
            aux->sig=NULL;
            return aux;
        }
}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        return NULL;
    }else
    {
        aux->cab=NULL;
        return aux;
    }
}
void agregarNumeros(Nodo*nodoAI,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
        {
            Nodo *aux=lista->cab;
            while(aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=nodoAI;
        }

}
void Maximovalor(Lista *lista)
{
    int max=lista->cab->num;
    Nodo *aux=lista->cab;
    while(aux!=NULL)
    {
        if(aux->num>max)
        {
            max=aux->num;
        }
        aux=aux->sig;
    }
    printf("Nro mas alto: %d\n",max);
}
void Minimovalor(Lista *lista)
{
    int min=lista->cab->num;
    Nodo *aux=lista->cab;
    while(aux!=NULL)
    {
        if(aux->num<min)
        {
            min=aux->num;
        }
        aux=aux->sig;
    }
    printf("Nro mas bajo: %d\n",min);
}
void EliminarValorMinMax(Lista *lista)
{
    int min=lista->cab->num;
    int max=lista->cab->num;
    Nodo *act=lista->cab;
    while(act!=NULL)
    {
        if(act->num>max)
        {
            max=act->num;
        } else
            {
                if(act->num<min)
                {
                    min=act->num;
                }
            }
        act=act->sig;
    }
    act=lista->cab;
    Nodo *ant=NULL;
    while (act != NULL) {
        if (act->num == max) {
            if (ant == NULL) {
                lista->cab = act->sig;
            } else {
                ant->sig = act->sig;
            }
            free(act);
        }
        ant = act;
        act = act->sig;
    }
    act=lista->cab;
    ant=NULL;
    while(act!=NULL)
    {
        if(act->num==min)
        {
            if(ant==NULL)
            {
                lista->cab=act->sig;
            }else
                {
                    ant->sig=act->sig;
                }
            free(act);
        }
        ant = act;
        act = act->sig;
    }
    act=lista->cab;
    printf("Nueva lista:\n");
    while(act!=NULL)
    {
        printf("%d\n",act->num);
        act=act->sig;
    }
}