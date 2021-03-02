#ifndef ASISTENCIA_H_INCLUDED
#define ASISTENCIA_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

 const int DIM = 1000;
 typedef struct
 {
   string fecha;
   string alumno;
   string carrera;
   string curso;
   string materia;
 } tAlumnos;


typedef tAlumnos tArray[DIM];

typedef struct {
   tArray elementos;
   int contador=0;
} tLista;
tLista lista;

 void openFile(tLista &lista);
 void asistencia(tLista &lista, bool &ok);
 void up_date_file (tLista &lista);
 void ordenar(tLista &lista);


 char op;
 bool ok;
 int i, j, pos;


#endif // ASISTENCIA_H_INCLUDED
