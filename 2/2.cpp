#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int h, v, a, g = 9.8, x, y, t;
    cout << "Enter h: ";
    cin >> h;
    cout << "Enter v: ";
    cin >> v;
    cout << "Enter a: ";
    cin >> a;
    if((1 + (2 * g * h) / (pow(v, 2) * pow(sin(a), 2))) >= 0){
        t = v * sin(a) / g * (1 + sqrt(1 + (2 * g * h) / (pow(v, 2) * pow(sin(a), 2))));
        x = v * t * cos(a);
        y = h + v * t * sin(a) - 0.5 * g * pow(t, 2);
        cout << "Result x: " << x << endl;
        cout << "Result y: " << y << endl;
    }
    return 0;
}