// cross product of vector using struct

#include <iostream>
using namespace std;

struct Vector {
    int x, y;
};

int cross(struct Vector u, struct Vector v)
{
    return u.x*v.y - v.x*u.y; 
}

int main()
{
    struct Vector u, v;
    
    cin >> u.x >> u.y >> v.x >> v.y;
    cout << u.x << " " << u.y << endl << v.x << " " << v.y << endl;
    
    cout << cross(u,v) << endl;
    return 0;
}
