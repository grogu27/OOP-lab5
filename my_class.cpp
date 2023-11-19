#include "my_class.hpp"
using namespace std;
    Figure::Figure()
    {
        //cout <<"Конструктор по умолчанию Figure"<< endl;
        Set_val(rand() % 10, rand() % 10);
        //cout << "x = " << this->x << "\t" << "y = " << this->y << endl;
    }
    Figure::Figure(int x, int y)
    {
        //cout <<"Конструктор с параметрами Figure"<< endl;
        Set_val(x, y);
        //cout << "x = " << this->x << "\t" << "y = " << this->y << endl;
    }
    void Figure::Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << endl;
    }
    void Figure::Set_val(int x, int y)
    {
        this->x = x;
        this->y = y;
    }



    Line::Line() 
    {
        //cout <<"Конструктор по умолчанию Line"<< endl;
        this->x2 = rand() % 10;
        this->y2 = rand() % 10;
        Set_val(x2, y2);
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    Line::Line(int x, int y, int x2, int y2) : Figure(x, y)
    {
        //cout <<"Конструктор с параметрами Line"<< endl;
        Set_val(x2, y2);
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    void Line::Get_line_len()
    {
        len = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    }
    void Line::Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << endl << "x2 = " << x2 << "\t" << "y2 = " << y2 << endl << "Длина линии: " << len << endl;
    }
    void Line::Set_val(int x2, int y2)
    {
        this->x2 = x2;
        this->y2 = y2;
        Get_line_len();
    }
    



    Square::Square()
    {
        //cout <<"Конструктор по умолчанию Square"<< endl;
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
        //Set_val(x2, y2);
    }
    Square::Square(int x, int y, int x2, int y2) : Line(x, y, x2, y2)
    {
        //cout <<"Конструктор с параметрами Square"<< endl;
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "x2 = " << this->x2 << "\t" << "y2 = " << this->y2 << endl;
    }
    void Square::Get_perimeter()
    {
        this->perimeter = len * 4;
    }
    void Square::Get_area()
    {
        this->area = len * len;
    }
    void Square::Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << endl << "x2 = " << x2 << "\t" << "y2 = " << y2 << endl << "Длина линии: " << len << endl << "Периметр квадрата: "<< perimeter << endl << "Площадь квадрата: " << area << endl;
    }
    void Square::Set_val()
    {
        Get_area();
        Get_perimeter();
    }
    


    Rectangle::Rectangle()
    {
        //cout <<"Конструктор по умолчанию Rectangle"<< endl;
        Set_val();
    }
     Rectangle::Rectangle(int x, int y, int x2, int y2) : Square(x, y, x2, y2)
    {
        //cout <<"Конструктор с параметрами Rectangle"<< endl;

        Set_val();
    }
    void Rectangle::Get_area()
    {
        this->area = sqrt((x-x3)*(x-x3) + (y-y3)*(y-y3)) * sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    }
    void Rectangle::Get_perimeter()
    {
        this->perimeter = (sqrt((x-x3)*(x-x3) + (y-y3)*(y-y3)) + sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3))) * 2;
    }
    void Rectangle::Set_val()
    {
        this->x3 = this->x;
        this->y3 = this->y2;
        this->x4 = this->x2;
        this->y4 = this->y;
        Get_area();
        Get_perimeter();
    }
    void Rectangle::Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << endl << "x2 = " << x2 << "\t" << "y2 = " << y2 << endl <<"x3 = "<< x3 << "\t"<<"y3 = "<< y3 << endl <<"x4 = "<< x4 << "\t"<<"y4 = "<< y4 << endl  << "Периметр прямоугольника: "<< perimeter << endl << "Площадь прямоугольника: " << area << endl;
    }


    Circle::Circle()
    {
        //cout <<"Конструктор по умолчанию Circle"<< endl;
        this->radius = rand() % 10;
        Set_val(radius);
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << endl;
    } 
    Circle::Circle(int x, int y, double radius) : Figure(x, y)
    {
        //cout <<"Конструктор с параметрами Circle"<< endl;
        this->radius = radius;
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << endl;
    }
    void Circle::Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << "\t" << "radius: " << radius << endl;
    }
    void Circle::Set_val(double radius)
    {
        this->radius = radius;
    }



    Ellipse::Ellipse()
    {
        //cout <<"Конструктор по умолчанию Ellipse"<< endl;
        this->rx = rand() % 10;
        this->ry = rand() % 10;
        Set_val(rx, ry);
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << "\t" << "rx = " << this->rx << "\t" << "ry = " << this->ry << endl;
    } 
    Ellipse::Ellipse(int x, int y, double rx, double ry) : Circle(x, y, rx)
    {
        //cout <<"Конструктор с параметрами Ellipse"<< endl;
        this->rx = rx;
        this->ry = ry;
        //cout << "x = " << this->x << "\t" << "y = " << this->y << "\t" << "radius = " << this->radius << "\t" << "rx = " << this->rx << "\t" << "ry = " << this->ry << endl;
    }
    void Ellipse::Get_val()
    {
        cout << "x = " << x << "\t" << "y = " << y << "\t" << "rx: " << rx << "\t" << "ry: " << ry << endl;
    }
    void Ellipse::Set_val(double rx, double ry)
    {
        this->rx = rx;
        this->ry = ry;
    }

