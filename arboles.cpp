#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo* left;
    Nodo* right;
    
    Nodo(int valor){
        dato = valor;
        left = right = nullptr;
    }
};

Nodo* insertar(Nodo* raiz, int valor){
    if(raiz == nullptr){
        return new Nodo(valor);
    }
    if(valor < raiz->dato){
        raiz->left = insertar(raiz->left, valor);
    }
    else if (valor > raiz->dato){
        raiz->right = insertar(raiz->right, valor);
    }
    return raiz;
}

void inorder(Nodo* raiz){
    if(raiz != nullptr){
        inorder(raiz->left);
        cout<<raiz->dato<<" "<<endl;
        inorder(raiz->right);
    }
}
void preorder(Nodo* raiz){
    
}

int main(){
    int n;
    int i;
    int v;
    Nodo* raiz = nullptr;
    cout<<"cuantos datos desea insertar en el arbol?"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
       cout<<"digite el valor a insertar:"<<endl;
       cin>>v;
       raiz = insertar(raiz,v);
    }
    
    inorder(raiz);
    
}