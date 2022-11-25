#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*�������� ����� �++ �����, ������� ������ �����(��������, ������� �������) 
    -��������� ��������� ���������� 
    - �������� ����� �� ��������� ������ 
    �� ���������������: 
    -���� ������(������ � �����) 
    - �������� ������� �����, ������� �� ����� � ����. 
    - �������� ���� 5 ����� 
    ϳ���� �� ����������� ������: 
    -���� ������ - ����������� ����� ���������� ����� ���� 
    -4 ������ ����� ����� 
    - � ���� �������� ����� � ����� ����� � ������� ���������� ��� ���.*/


class figure {
protected:
    vector<string> points;
public:
    figure() { points.resize(10); 
    for (int i = 0; i < 10; i++)
    {
        points[i] = '*';
    }
    }
    virtual void print() = 0;
};
class rectangle : public figure{
public:
    rectangle() {}
    void print() override {
        cout << "********" << endl;
        cout << "*      *" << endl;
        cout << "*      *" << endl;
        cout << "********" << endl;
    }
};
class square : public figure {
public:
    square() {}
    void  print() override {
        cout << "****" << endl;
        cout << "*  *" << endl;
        cout << "****" << endl;
    }
};
class triangle : public figure {
public:
    triangle() {}
    void print() override {
        cout << "   * " << endl;
        cout << " *   *" << endl;
        cout << "*******" << endl;
    }
};
class circle : public figure {
public:
    circle() {}
    void print()override {
        cout << "   *   " << endl;
        cout << " *   * " << endl;
        cout << "   *   " << endl;
    }
};


int main() {
    figure* fptr;
    rectangle r;
    square s;
    triangle t;
    circle c;
    fptr = &r;
    fptr->print();
    fptr = &s;
    fptr->print();
    fptr = &t;
    fptr->print();
    fptr = &c;
    fptr->print();


	return 0;
}