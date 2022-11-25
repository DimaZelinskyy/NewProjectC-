#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*Створити новий С++ проєкт, описати карказ роєкту(бібліотеки, головну функцію) 
    -Ствоприти віддалений репозиторій 
    - Запушити проєкт на віддалений сервер 
    По функціональності: 
    -Клас фігура(Вектор з точок) 
    - Створити декілька фігур, вивести на екран у мейні. 
    - Створити хоча 5 комітів 
    Пізніше до функціоналу додати: 
    -Клас фігура - абстрактний чисто віртуальний метод прінт 
    -4 похідні класи фігур 
    - в мейні створити масив з різних фігур і вивести інформацію про них.*/


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