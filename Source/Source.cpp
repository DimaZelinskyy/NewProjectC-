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
    int width;
    int height;
public:
    rectangle() :width(0), height(0) {}
    rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
    void print() override {
        cout << points[1];
        for (int i = 0; i < width - 2; i++)
        {
            cout << points[i];
        }
        cout << points[1] << "\n";

        for (int i = 0; i < height - 2; i++)
        {
            cout << points[i];
            for (int j = 0; j < width - 2; j++)
            {
                cout << " ";
            }
            cout << points[1] << "\n";
        }

        cout << points[1];
        for (int i = 0; i < width - 2; i++)
        {
            cout << points[i];
        }
        cout << points[1] << "\n";
        
    }
    void printInformation() {
        cout << "Rectangle has four angles" << endl;
    }
};
class square : public figure {
    int length;
public:
    square(int length) {
        this->length = length;
    }
    void  print() override {
        for (int a = 0, j = 0; a < length; a++) {
            for (int i = 0; i < length; i++) {
                if (i == j && j == (length + 1) - i) {
                    cout << points[i];
                }
                else if (i == j) {
                    cout << points[i];
                }
                else if (i == (length + 1) - j) {
                    cout << points[i];
                }
                else {
                    cout << '*';
                }
            }
            j++;
            cout << endl;
        }
    }
    void printInformation() {
        cout << "Square has four angles" << endl;
    }
};
class triangle : public figure {
    int rows;
    int space;
public:
    triangle(int rows, int space) {
        this->rows = rows;
        this->space = space;
    }
    void print() override {
        for (int i = 1, k = 0; i <= rows; ++i, k = 0)
        {
            for (space = 1; space <= rows - i; ++space)
            {
                cout << "  ";
            }

            while (k != 2 * i - 1)
            {
                cout << points[i];
                ++k;
            }
            cout << endl;
        }
    }
    void printInformation() {
        cout << "Triangle has three angles" << endl;
    }
};
class circle : public figure {
public:
    circle() {}
    void print()override {
        cout << "Circle: " << "\n\n";
        cout << "   *   " << endl;
        cout << " *   * " << endl;
        cout << "   *   " << endl;
    }
    void printInformation() {
        cout << "Cirlce has no angles" << endl;
    }
};


int main() {
    figure* fptr;
    int width; int height;
    cout << "Enter width for rectangle: " << endl; cin >> width;
    cout << "Enter height for rectangle: " << endl; cin >> height;
    rectangle r(width, height);
    int lengthS;
    cout << "Enter length for square: " << endl; cin >> lengthS;
    square s(lengthS);
    int rows, space;
    cout << "Enter rows: " << endl; cin >> rows;
    cout << "Enter space: " << endl; cin >> space;
    triangle t(rows,space);
    circle c;
    fptr = &r;
    fptr->print();
    r.printInformation();
    fptr = &s;
    fptr->print();
    s.printInformation();
    fptr = &t;
    fptr->print();
    t.printInformation();
    fptr = &c;
    fptr->print();
    c.printInformation();

   

	return 0;
}