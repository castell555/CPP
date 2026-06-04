/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include "date.h"
#include "string"

// Person 클래스의 정의
class Person
{
  private:
    string id;
    Date birthDate; //has-a
  public: 
    Person(string id, Date birthDate);    // aggregation
    ~Person(); 
    void print() const; 
};
#endif