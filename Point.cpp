#include <iostream>
using namespace std;

const int MAX_X = 10;
const int MAX_Y = 10;
const float IN_CM = 2.54;

struct Point {
    float x;
    float y;
};

void showPoint(const struct Point &p);
void updatePoint(struct Point &p);
struct Point createPoint();
struct Point createPointValue(float x = 0.0, float y = 0.0);
inline float InchesToCm(float val) {return val * IN_CM;};

int main() {
    Point p1 = {2.5,3.1};
    showPoint(p1);
    updatePoint(p1);
    showPoint(p1);
    Point p2 = createPoint();
    showPoint(p2);

    Point p3 = createPointValue(12.3,4.7);
    showPoint(p3);

    p3 = createPointValue();
    showPoint(p3);

    p3.x = InchesToCm(1.5);
    showPoint(p3);

    return 0;
}

void showPoint(const struct Point &p){
    cout << "X-Coordinate is: " << p.x << endl;
    cout << "Y-Coordinate is: " << p.y << endl;
}

void updatePoint(struct Point &p){
    p.x++;
    p.y++;
}

struct Point createPoint(){
    struct Point point = {0,0};

    return point;
}

struct Point createPointValue(float x, float y){
    struct Point point = {x,y};

    return point;
}