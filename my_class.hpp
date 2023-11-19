#include <iostream>
#include <cmath>
using namespace std;
class Figure
{
protected:
    int x;
    int y;
public:
    Figure();
  
    Figure(int x, int y);
  
    void Get_val();
  
    void Set_val(int x, int y);
 
};

class Line: public Figure
{
protected:
    double len;
    int x2;
    int y2;
public:
    Line();
  
    Line(int x, int y, int x2, int y2);
 
    void Get_line_len();
 
    void Get_val();
    
    void Set_val(int x2, int y2);

    
};

class Square : public Line
{
protected:
    double perimeter;
    double area;
public:
    Square();
  
    Square(int x, int y, int x2, int y2);
   
    void Get_perimeter();
  
    void Get_area();
  
    void Get_val();

    void Set_val();
 
};
class Rectangle : public Square
{
protected:
    int x3;
    int y3;
    int x4;
    int y4;
public:
    Rectangle();
 
    Rectangle(int x, int y, int x2, int y2);

    void Get_area();
 
    void Get_perimeter();
 
    void Set_val();

    void Get_val();

};

class Circle : public Figure
{
protected:
    double radius;
public:
    Circle();
 
    Circle(int x, int y, double radius);
 
    void Get_val();
  
    void Set_val(double radius);
  

};

class Ellipse : public Circle {
protected:
double rx, ry;
public:
    Ellipse();
 
    Ellipse(int x, int y, double rx, double ry);
  
    void Get_val();
   
    void Set_val(double rx, double ry);
 

};
