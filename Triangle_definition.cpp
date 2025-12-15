#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c; cin.ignore();

    int sides[3] = {a, b, c};
    sort(sides, sides+3);
    int x = sides[0];
    int y = sides[1];
    int z = sides[2];

    if (x + y < z)
        cout << "impossible";
    else if (x + y == z)
        cout << "degenerate";
    else if (z * z == x * x + y * y)
        cout << "right";
    else if (z * z < x * x + y * y)
        cout << "acute";
    else
        cout << "obtuse";
}