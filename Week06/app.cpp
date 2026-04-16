//stack memory : parameters, local variables
//static(data) memory : global object, static object
// heap memory : dynamic memory allocation (allocate at running time)
/*
포인터 변수는 메모리 번지 주소만 받을 수 있고 동적 할당하면 힙 메모리 주소가 리턴되서 포인터 변수가 필요
힙메모리는 러닝타임에 사용, 제거할 때 사용
힙메모리는 속도 느림
new 키워드는 자바, C# 사용, delete 안하는 이유는 jvm, 닷넷프레임워크 gc때문
*/
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int count;  // static object

public:
    // constructor
    Circle() : radius(0.0) {
        cout << this << "원 객체 생성 (기본 생성자)\n";
        count++;
    }
    Circle(double r) {
        cout << this << "원 객체 생성 (매개변수 생성자)\n";
        radius = r;
        count++;
    }
    Circle(const Circle& c) {
        cout << this << "원 객체 생성 (복사 생성자)\n";
        radius = c.radius;
        count++;
    }

    ~Circle() {
        cout << this << "원 객체 소멸\n";
        count--;
    }
    // inline member function
    double getRadius() const {
        return radius;
    }
    double getArea() const {
        const double PI = 3.14;
        return (PI * radius * radius);
    }
    double getPerimeter() const {
        const double PI = 3.14;
        return (2 * PI * radius);
    }
    void setRadius(double value);  // inline O

    static int getCount();
};

int Circle::count = 0;

int Circle::getCount() {
    return count;
}

inline void Circle::setRadius(double value)
{
    radius = value;
}

Circle circle5;  // global object

Circle* test() {
    Circle circle6(2.0);
    Circle* circle7 = new Circle(circle6); //allocate heap memory

    cout << Circle::getCount() << "개\n";

    cout << circle6.getCount() << "\n";
    //cout << circle7.getCount() << "개\n"; //error.circle7은 객체가 아닌 지역 포인트 변수
    cout << (*circle7).getCount() << "\n";
    cout << circle7->getCount() << "\n";

    //delete circle7; //free heap memory
    cout << Circle::getCount() << "개\n";
    return circle7;
}

int main()
{
    cout << Circle::getCount() << "개\n";

    Circle circle1;
    circle1.setRadius(10.0);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    cout << Circle::getCount() << "개\n";

    Circle* circle8 = test();
    cout << circle8->getRadius() << '\n';
    cout << circle8->getArea() << '\n';
    delete circle8; // 힙메모리에 할당된 객체를 삭제(소멸자 동작)
    circle8 = nullptr; // 포인터가 가지고 있던 힙메모리 번지 주소를 0으로 초기화

    cout << Circle::getCount() << "개\n";

    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

    Circle circle3(5.0);

    Circle circle4(circle2);
    cout << "Radius: " << circle4.getRadius() << endl;

    cout << Circle::getCount() << "개\n";
    //cout << circle4.getCount() << "개\n"; getCount도 Circle클래스의 멤버함수로 인스턴스. getCount
    //cout << circle6.getCount() << "개\n"; //이미 소멸된 객체라 사용 불가, 오류발생

    return 0;
}