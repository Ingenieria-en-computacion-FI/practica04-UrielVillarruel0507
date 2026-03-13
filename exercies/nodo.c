#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

// Ejercicio 1
Nodo* crearNodo(int valor){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if(nuevo){
        nuevo->dato = valor;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

// Ejercicio 2
Nodo* crearArregloNodos(int n){
    return (Nodo*)calloc(n, sizeof(Nodo));
}

// Ejercicio 3
Nodo* agregarNodo(Nodo* arreglo, int* n, int valor){
    Nodo* nuevo = (Nodo*)realloc(arreglo, (*n + 1) * sizeof(Nodo));
    if(nuevo){
        nuevo[*n].dato = valor;
        nuevo[*n].siguiente = NULL;
        (*n)++;
    }
    return nuevo;
}

// Ejercicio 4
void liberarNodos(Nodo* arreglo, int n){
    free(arreglo);
}

// Ejercicio 5
Nodo* construirTresNodos(){
    Nodo *n1 = crearNodo(10), *n2 = crearNodo(20), *n3 = crearNodo(30);
    if(n1) n1->siguiente = n2;
    if(n2) n2->siguiente = n3;
    return n1;
}

// Ejercicio 6
int contarNodos(Nodo* inicio){
    int c = 0;
    Nodo* a = inicio;
    while(a){
        c++;
        a = a->siguiente;
    }
    return c;
}

// Ejercicio 7
Nodo* crearNodosPorEntrada(){
    Nodo *i = NULL, *u = NULL;
    int v;

    while(scanf("%d", &v) == 1 && v != -1){
        Nodo* n = crearNodo(v);
        if(!i) i = n;
        else u->siguiente = n;
        u = n;
    }

    return i;
}
