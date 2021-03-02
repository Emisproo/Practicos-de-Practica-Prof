//ARCHIVO .cpp PARA METODOS DE LA LISTA DE REGISTROS: DATOS, ORDEN.
#include "Asistencia.h"
void asistencia(tLista &lista, bool &ok)
{
    tAlumnos alumno;
    ok = true;
     if(lista.contador < DIM)
    {
         cout << endl;
        cout << "***REGISTRO DE ASISTENCIAS***"<< endl;
        cout << "Ingrese la fecha del día (dd/mm/aaaa): ";
        getline(cin,alumno.fecha);
        cout << "Ingrese su nombre y apellido: ";
        getline(cin,alumno.alumno);
        cout << "Ingrese la carrera que cursa: ";
        getline(cin,alumno.carrera);
        cout << "Ingrese el curso: ";
        getline(cin,alumno.curso);
        cout << "Ingrese la materia que va a presenciar: ";
        getline(cin,alumno.materia);

         if (lista.contador == DIM)
        {
            ok = false;

        }
        else
        {
            int i=0;
            while  (i < lista.contador)
            {
                i++;
            }
                // Insertamos en la posición i (primer mayor o igual)
            for (int j = lista.contador; j > i; j--)
            {
                // Desplazamos una posición a la derecha
                lista.elementos[j] = lista.elementos[j-1];
            }
            lista.elementos[i] = alumno;
            lista.contador++;
        }
    }
        else
            cout << "Maximo de alumnos cargados (1000)!" << endl;

}

void ordenar(tLista &lista)
{
    for (i = 1; i < lista.contador; i++) // Desde el segundo elemento hasta el último
        {
         for(int j = 0; j < lista.contador - 1; j++)
            {
              tAlumnos temp;
              temp = lista.elementos[j];
              lista.elementos[j] = lista.elementos[j+1];
              lista.elementos[j+1] = temp;
            }
    }
}
