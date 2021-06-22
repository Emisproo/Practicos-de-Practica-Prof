#include "AttendanceManagement.hpp"
#include <fstream>
AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}

void AttendanceManagement::showAttendance(Student* student, Course* course, string datetime, bool state)
{

  ofstream archivo;
  archivo.open("Assistance.csv", ios::out | ios::app);
     if(archivo.is_open())
      {
        archivo << student->getIdentifier() << ", "
                << student->getName() << ", "
                << student->getSurname() << ", "
                << course->getIdentifier() << ", "
                << course->getName() << ", "
                << datetime << ", "
                << "present: " << state << ", "
                 << endl;

      }
  archivo.close();
}
