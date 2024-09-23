#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float k, a, w, x, f, t;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter w: ";
    cin >> w;
    f = asin(1 / k);
    t = (90 - f) / w;
    x = a * sin(w * t + f);
    cout << "The result: " << x << endl;
    return 0;
}