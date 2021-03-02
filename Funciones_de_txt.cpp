/* ARCHIVO .cpp PARA METODOS REFERIDOS AL TEXTO: CREACION/APERTURA Y CIERRE DE ARCHIVO TXT,
Y ACTUALIZACION*/
#include <fstream>
#include "Asistencia.h"

void openFile(tLista &lista)
 {
      ifstream OpenFile; //abrimos el archivo y se sacan los datos...
        OpenFile.open("Asistencias.txt", ios::in);
        if(OpenFile.is_open())
        {
            while(!OpenFile.eof())
               {
                OpenFile >> lista.elementos[lista.contador].fecha;
                OpenFile.get( );
                OpenFile >> lista.elementos[lista.contador].alumno;
                OpenFile.get( );
                OpenFile >> lista.elementos[lista.contador].carrera;
                OpenFile.get( );
                OpenFile >> lista.elementos[lista.contador].curso;
                OpenFile.get( );
                OpenFile >> lista.elementos[lista.contador].materia;
                OpenFile.get( );

                if((!lista.elementos[i].fecha.empty())
                   && (!lista.elementos[i].alumno.empty())
                   && (!lista.elementos[i].carrera.empty())
                   && (!lista.elementos[i].curso.empty())
                   && (!lista.elementos[i].materia.empty())) //si el renglon no esta vacio...
                {
                    lista.contador++;
                }
              }
        }
            OpenFile.close();
 }

 void up_date_file (tLista &lista)
{
     ofstream Archivo;
    Archivo.open("Asistencias.txt", ios::out);
    if(Archivo.is_open())
    {
        for(i = 0; i < lista.contador; i++)
        {
             Archivo <<lista.elementos[i].fecha<< " "
             << lista.elementos[i].alumno<< " "
             << lista.elementos[i].carrera << " "
             <<lista.elementos[i].curso << " "
             << lista.elementos[i].materia << endl;
        }
    }
    Archivo.close();
}
