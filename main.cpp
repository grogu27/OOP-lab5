#include <iostream>
#include <cmath>
using namespace std;

class Figure
{
protected:
    int x;
    int y;
public:
    Figure()
    {
        cout <<"Конструктор по умолчанию Figure"<< endl;
        this->x = rand() % 10;
        this->y = rand() % 10;
        cout << "x = " << this->x << "\t" << "y = " << this->y << endl;
    }
    Figure(int x, int y)
    {
        cout <<"Конструктор с параметрами Figure"<< endl;
        this->x = x;
        this->y = y;
        cout << "x = " << this->x << "\t" << "y = " << this->y << endl;
    }
    void Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << endl;
    }
    void Set_val(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

class Line: public Figure
{
protected:
    double len;
    int x2;
    int y2;
public:
    Line() 
    {
        cout <<"Конструктор по умолчанию Line"<< endl;
        this->x2 = rand() % 10;
        this->y2 = rand() % 10;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    Line(int x, int y, int x2, int y2) : Figure(x, y)
    {
        cout <<"Конструктор с параметрами Line"<< endl;
        this->x2 = x2;
        this->y2 = y2;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    void Get_line_len()
    {
        len = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    }
    void Get_val()
    {
        Get_line_len();
        cout << "x = " << x << "\t" << "y = " << y << endl << "x2 = " << x2 << "\t" << "y2 = " << y2 << endl << "Длина линии: " << len << endl;
    }
    void Set_val(int x, int y, int x2, int y2)
    {
        this->x = x;
        this->y = y;
        this->x2 = x2;
        this->y2 = y2;
    }
    
};

class Square : public Line
{
protected:
    double perimeter;
    double area;
public:
    Square()
    {
        cout <<"Конструктор по умолчанию Square"<< endl;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    Square(int x, int y, int x2, int y2) : Line(x, y, x2, y2)
    {
        cout <<"Конструктор с параметрами Square"<< endl;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    void Get_perimeter()
    {
        this->perimeter = len * 4;
    }
    void Get_area()
    {
        this->area = len * len;
    }
    void Get_val()
    {
        Get_line_len();
        Get_area();
        Get_perimeter();
        cout << "x = " << x << "\t" << "y = " << y << endl << "x2 = " << x2 << "\t" << "y2 = " << y2 << endl << "Длина линии: " << len << endl << "Периметр квадрата: "<< perimeter << endl << "Площадь квадрата: " << area << endl;
    }
};
class Rectangle : public Square
{
protected:
    int x3;
    int y3;
    int x4;
    int y4;
public:
    Rectangle()
    {
        cout <<"Конструктор по умолчанию Rectangle"<< endl;
        this->x3 = this->x;
        this->y3 = this->y2;
        this->x4 = this->x2;
        this->y4 = this->y;
    }
    Rectangle(int x, int y, int x2, int y2) : Square(x, y, x2, y2)
    {
        cout <<"Конструктор с параметрами Rectangle"<< endl;
        this->x3 = this->x;
        this->y3 = this->y2;
        this->x4 = this->x2;
        this->y4 = this->y;
    }
    void Get_area()
    {
        this->area = sqrt((x-x3)*(x-x3) + (y-y3)*(y-y3)) * sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    }
    void Get_perimeter()
    {
        this->perimeter = (sqrt((x-x3)*(x-x3) + (y-y3)*(y-y3)) + sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3))) * 2;
    }
    void Set_val(int x, int y, int x2, int y2, int x3, int y3, int x4, int y4)
    {
        this->x = x;
        this->y = y;
        this->x2 = x2;
        this->y2 = y2;
        this->x3 = x3;
        this->y3 = y3;
        this->x4 = x4;
        this->y4 = y4;
    }
    void Get_val()
    {
        Get_line_len();
        Get_area();
        Get_perimeter();
        cout << "x = " << x << "\t" << "y = " << y << endl << "x2 = " << x2 << "\t" << "y2 = " << y2 << endl <<"x3 = "<< x3 << "\t"<<"y3 = "<< y3 << endl <<"x4 = "<< x4 << "\t"<<"y4 = "<< y4 << endl  << "Периметр прямоугольника: "<< perimeter << endl << "Площадь прямоугольника: " << area << endl;
    }
};

class Circle : public Figure
{
protected:
    double radius;
public:
    Circle()
    {
        cout <<"Конструктор по умолчанию Circle"<< endl;
        this->radius = rand() % 10;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << endl;
    } 
    Circle(int x, int y, double radius) : Figure(x, y)
    {
        cout <<"Конструктор с параметрами Circle"<< endl;
        this->radius = radius;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << endl;
    }
    void Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << "\t" << "radius: " << radius << endl;
    }
    void Set_val(int x, int y)
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
    }

};

class Ellipse : public Circle {
protected:
double rx, ry;
public:
    Ellipse()
    {
        cout <<"Конструктор по умолчанию Ellipse"<< endl;
        this->rx = rand() % 10;
        this->ry = rand() % 10;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << "\t" << "rx = " << this->rx << "\t" << "ry = " << this->ry << endl;
    } 
    Ellipse(int x, int y, double rx, double ry) : Circle(x, y, rx)
    {
        cout <<"Конструктор с параметрами Ellipse"<< endl;
        this->rx = rx;
        this->ry = ry;
        cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << "\t" << "rx = " << this->rx << "\t" << "ry = " << this->ry << endl;
    }
    void Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << "\t" << "rx: " << rx << "\t" << "ry: " << ry << endl;
    }
    void Set_val(int x, int y, double rx, double ry)
    {
        this->x = x;
        this->y = y;
        this->rx = rx;
        this->ry = ry;
    }

};

int main()
{
    srand(time(NULL));
    cout << endl;

    Line l(1, 2, 13, 4);
    Square s;
    Rectangle r(1, 2, 13, 4);
    Circle c;
    Ellipse e(2, 13, 4, 7);

    cout <<"Line"<< endl;
    l.Get_val();
    cout << endl;

    cout <<"Square"<< endl;
    s.Get_val();
    cout << endl;

    cout <<"Rectangle"<< endl;
    r.Get_val();
    cout << endl;

    cout <<"Circle"<< endl;
    c.Get_val();
    cout << endl;

    cout <<"Ellipse"<< endl;
    e.Get_val();
    cout << endl;

    Rectangle* rectangles = new Rectangle[3];

    rectangles[0] = Rectangle(1, 1, 4, 4);
    rectangles[1] = Rectangle(1, 1, 4, 4);
    rectangles[2] = Rectangle(1, 1, 4, 4);

    for (int i = 0; i < 3; i++) 
        rectangles[i].Get_val();
    
    delete[] rectangles;






    // Figure a;
    // Line b;
    // Square c;
    // Rectangle d(2, 3, 4, 5);
    // // Circle e;
    // // Ellipse t;
    // cout << endl <<"Figure"<< endl ;
    // a.Get_val();
    // cout << endl;

    // cout <<"Line"<< endl;
    // b.Get_val();
    // cout << endl;

    // cout <<"Square"<< endl;
    // c.Get_val();
    // cout << endl;

    // cout <<"Rectangle"<< endl;
    // d.Get_val();
    // cout << endl;

    // // cout <<"Circle"<< endl ;
    // // e.Get_val();
    // // cout << endl;

    // // cout <<"Ellipse"<< endl ;
    // // t.Get_val();
    // // cout << endl;
    
    return 0;
}