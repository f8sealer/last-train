#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main() //Main function
{
    double y, x, x1 = 2, x2 = 3, h = 0.1;

    x = x1;

    while (x <= x2) {
        y = pow(cos(x), 2) + log(x) + 2;
        cout << x << "\t" << y << "\n";
        x += h;
    }

    return 0;
}
