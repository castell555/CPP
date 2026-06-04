#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "name.h"

class Employee
{
  private:
    Name name;
    int salary;
  public: 
    Employee(string first, string init, string last,
              double salary);
    Employee(string last, string first, int sal);
    ~Employee();
    void print() const; 
};
#endif