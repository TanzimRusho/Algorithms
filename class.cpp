// cross product of vector using class

#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    void setX(int _x) {
        x = _x;
    }
    void setY(int _y) {
        y = _y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
};

double cross(Vector u, Vector v)
{
    return u.getX()*v.getY() - v.getY()*u.getX();
}

int main()
{
    Vector u, v;
    
    u.setX(2);
    u.setY(20);
    v.setX(4);
    v.setY(40);
    
    cout << u.getX() << " " << u.getY() << endl;
    cout << v.getX() << " " << v.getY() << endl;
    
    cout << cross(u, v) << endl;
    
    return 0;
}
