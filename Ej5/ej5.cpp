/*Ejercicio 5: Gestión de entregas de paquetes
Problema: Trabajas en una empresa de logística y debes gestionar los paquetes que llegan
y se entregan a través de un sistema. Cada paquete tiene un número de seguimiento único.
Tu sistema debe permitir la entrada de nuevos paquetes, la entrega (eliminación) de
paquetes, y la verificación de los que siguen en tránsito.
● Tarea: Inserta los paquetes con los números de seguimiento: 1001, 5002, 3003,
2004, 4500, 7005, 8006.
● Desafío: Los paquetes con los números de seguimiento 2004 y 4500 fueron
entregados, así que elimínalos. Luego, un nuevo paquete con el número 3500 llega
al sistema. Verifica si el paquete con el número 1001 sigue en tránsito e imprime la
lista de paquetes restantes*/


#include <iostream>
#include "../Librerias/Arbol/ArbolBinario.h"


int main (){

    ArbolBinario<int> nroPaquetes;

    //agregamos los paquetes
    nroPaquetes.put(1001);
    nroPaquetes.put(5002);
    nroPaquetes.put(3003);
    nroPaquetes.put(2004);
    nroPaquetes.put(4500);
    nroPaquetes.put(7005);
    nroPaquetes.put(8006);

    //paquetes antes de cambios
    std::cout<<"Paquetes en a entregar: \n";
    nroPaquetes.print();

    //eliminamos los paquetes
    nroPaquetes.remove(2004);
    nroPaquetes.remove(4500);

    //agregamos un nuevo paquete
    nroPaquetes.put(3500);

    
    //verificamos si el paquete 1001 sigue en transito
    try
    {
        int paquete1001 = nroPaquetes.search(1001);
    }
    catch(int e)
    {
        if (e==404)
        {
            std::cout << "El paquete 1001 no esta en transito" << std::endl;
        }
    }

    //lista actualizada de paquetes
    std::cout << "Lista actualizada \n";
    nroPaquetes.print();


}