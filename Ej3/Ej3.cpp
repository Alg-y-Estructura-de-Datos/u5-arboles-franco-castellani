/*Ejercicio 3: Sistema de inscripción en un gimnasio
Problema: Estás diseñando un sistema de inscripción para un gimnasio, donde cada socio
tiene un número de socio único. El sistema debe permitir la inscripción de nuevos socios, la
eliminación de socios que se dan de baja, y la búsqueda de socios activos.
● Tarea: Inscribe a los socios con los siguientes números de socio: 500, 250, 750, 100,
300, 600, 800.
● Desafío: Un socio con el número 250 se da de baja, así que elimínalo. Luego,
verifica si los socios con los números 300 y 750 aún están activos. Imprime la lista
de socios actualizada.*/

#include <iostream>
#include "../Librerias/Arbol/ArbolBinario.h"
using namespace std;

int main()
{

    ArbolBinario<int> inscripcion;

    inscripcion.put(500);
    inscripcion.put(250);
    inscripcion.put(750);
    inscripcion.put(100);
    inscripcion.put(300);
    inscripcion.put(600);
    inscripcion.put(800);

    // lista de socios antes de las modificaciones
    inscripcion.print();

    // se da de baja socio 250
    inscripcion.remove(250);

    // verificar si los socios 300 y 750 están activos
    try
    {
        int socio300 = inscripcion.search(300);
    }
    catch (int e)
    {
        if (e == 404)
        {
            cout << "El socio 300 no está activo" << endl;
        }
    }

    
    try
    {
        int socio750 = inscripcion.search(750);
    }
    catch (int e)
    {
        if (e == 404)
        {
            cout << "El socio 750 no está activo" << endl;
        }
    }


    // lista de socios después de las modificaciones
    cout << "Lista de socios actualizada: " << endl;
    inscripcion.print();
    

    return 0;


}