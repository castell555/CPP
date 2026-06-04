#include "employee.h"

int main()
{
  // 인스턴스화
  Employee employee1("김", "대림", 30000000);
  Employee employee2("최", "대림", 50000000);
  Employee employee3("박", "대림", 45000000);
  // 출력
  employee1.print();
  employee2.print();
  employee3.print();
  return 0;
}  