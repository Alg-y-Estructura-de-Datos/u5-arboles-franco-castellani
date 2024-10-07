/*Ejercicio 4: Administración de reservas en un restaurante
Problema: Un restaurante tiene un sistema de reservas donde cada mesa tiene un número
específico. A medida que los clientes reservan o cancelan mesas, el sistema debe
mantenerse actualizado.
● Tarea: Agrega las reservas de las siguientes mesas: 15, 10, 20, 5, 12, 18, 25.
● Desafío: Dos clientes cancelaron sus reservas en las mesas 10 y 20, así que
elimínalas del sistema. Luego, un nuevo cliente reserva la mesa 13. Verifica si la
mesa 12 aún está reservada e imprime la lista actualizada de mesas reservadas.
*/

#include <iostream>
#include "../Librerias/Arbol/ArbolBinario.h"

int main(){

    ArbolBinario<int> mesasReservadas;

    //agregamos las mesas
    mesasReservadas.put(15);
    mesasReservadas.put(10);
    mesasReservadas.put(20);
    mesasReservadas.put(5);
    mesasReservadas.put(12);
    mesasReservadas.put(18);
    mesasReservadas.put(25);

    //mesas antes de cambios
    std::cout << "Mesas reservadas: \n";
    mesasReservadas.print();

    //eliminamos las mesas
    mesasReservadas.remove(10);
    mesasReservadas.remove(20);

    //agregamos una nueva mesa
    mesasReservadas.put(13);

    //verificamos si la mesa 12 esta reservada
    try
    {
        int mesa12 = mesasReservadas.search(12);

    }
    catch(int e)
    {
        if (e==404)
        {
            std::cout << "La mesa 12 no está reservada" << std::endl;
        }
    }
    
    //lista actualizada de mesas
    std::cout << "lista actualizada \n";
    std::cout << "Mesas reservadas: \n";
    mesasReservadas.print();

}