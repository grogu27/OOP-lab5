#include "my_class.hpp"
using namespace std;


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

    return 0;
}