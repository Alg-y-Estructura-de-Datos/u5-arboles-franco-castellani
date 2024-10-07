/*Ejercicio 1: Organización de una biblioteca
Problema: Estás organizando una biblioteca familiar. Cada libro tiene un número único de
identificación (ID) y quieres organizar los libros en un sistema que te permita agregarlos,
eliminarlos y buscarlos fácilmente.
● Tarea: Inserta los libros con los siguientes IDs en el sistema de gestión (árbol): 101,
52, 198, 36, 75, 150, 200.
● Desafío: Busca el libro con el ID 75 y verifica si está en la biblioteca. Luego elimina
el libro con el ID 52 porque fue prestado. Imprime la estructura del sistema después
de la eliminación.
*/

#include <iostream>
#include "../Librerias/Arbol/ArbolBinario.h"

using namespace std;

int main() {

    cout << "Ejercicio N° 1" << endl;

    ArbolBinario<int> biblioteca;

    biblioteca.put(101);
    biblioteca.put(52);
    biblioteca.put(198);
    biblioteca.put(36);
    biblioteca.put(75);
    biblioteca.put(150);
    biblioteca.put(200);

    biblioteca.print();
    biblioteca.preorder();
    biblioteca.inorder();
    biblioteca.postorder();
    

    //buscamos el libro con id 75
    try
    {
        int libro = biblioteca.search(75);
        cout << "El libro con id 75 se encuentra en la biblioteca: " <<libro<< endl;
    }
    catch(int e)
    {
        if (e == 404){
            cout << "El libro con id 75 no se encuentra en la biblioteca" << endl;
        }
    }


    //eliminamos el libro con id 52
    biblioteca.remove(52);

    //imprimimos la estructura del sistema
    cout << "Estructura del sistema después de la eliminación del libro con id 52: " << endl;
    biblioteca.print();


    

    return 0;
}
