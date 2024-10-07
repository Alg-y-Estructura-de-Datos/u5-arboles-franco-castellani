#include <iostream>
#include "Librerias/Arbol/ArbolBinario.h"
#include "Librerias/Arbol/ArbolBinarioAVL.h"
using namespace std;

int main(){


    ArbolBinario<int> arbol;
    ArbolBinarioAVL<int> arbolAVL;

    arbol.put(10);
    arbol.put(5);
    arbol.put(15);
    arbol.put(3);
    arbol.put(7);
    arbol.put(2);

    arbol.print();
    cout << endl;

    arbol.preorder();
    arbol.inorder();
    arbol.postorder();
    cout<<endl;

    arbol.remove(5);

    arbol.print();
    cout << endl;
    

    arbolAVL.put(50);
    arbolAVL.put(20);
    arbolAVL.put(70);
    arbolAVL.put(10);
    arbolAVL.put(30);
    //arbolAVL.put(2);
    //arbolAVL.put(1);
    //arbolAVL.put(11);

    arbolAVL.print();
    cout << endl;

    
    arbolAVL.preorder();
    arbolAVL.inorder();
    arbolAVL.postorder();
    cout<<endl;
    
    arbolAVL.remove(70);
    arbolAVL.put(25);
    arbolAVL.put(60);
    arbolAVL.put(80);
    
    arbolAVL.print();
    cout <<endl;
    

    return 0;
}

