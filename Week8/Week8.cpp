#include<iostream>
using namespace std;
struct Point {
    int x, y;
};
void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

void swapxy(Point p) {
    int c = p.x;
    p.x = p.y;
    p.y = c;
}

void swapxy1(Point &p) {
int c = p.x;
p.x = p.y;
p.y = c;
}


Point midpoint(const Point p1, const Point p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}


struct Rect {
    int x, y;
    int w, h;
    bool contains(const Point &p) const {
        return p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h;
    }
};



struct Ship {
    Rect rect;
    string id;
    int dx, dy;

    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};


void display(const Ship &ship) {
    cout << "Ship " << ship.id << " : (" << ship.rect.x << ", " << ship.rect.y << ")\n";
}


int main()
{
   Point point;
   point.x = 10;
   point.y = 12;
   print(point);
   swapxy(point);
   print(point);

    cout << "Dia chi point: " << &point << endl;
    cout << "Dia chi x: " << &(point.x) << endl;
    cout << "Dia chi y: " << &(point.y) << endl;
   swapxy1(point);
   print(point);
    cout << "Dia chi point: " << &point << endl;
    cout << "Dia chi x: " << &(point.x) << endl;
    cout << "Dia chi y: " << &(point.y) << endl;


   Point point2;
    point2.x = 30;
    point2.y = 48;
    Point mid = midpoint(point, point2);
    print(mid);
    print(point);
    print(point2);



    Ship ship1 = {{10, 10, 5, 5}, "Bao", 1, 2};
    Ship ship2 = {{20, 20, 5, 5}, "Long", 3, 4};

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }
}

