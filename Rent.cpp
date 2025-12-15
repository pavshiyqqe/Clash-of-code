#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int p;
    cin >> p; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    int r;
    cin >> r; cin.ignore();

    long sum = p*h;
    if (sum > r)
        cout << "YES";
    else if (sum == r)
        cout << "BARELY";
    else
        cout << "NO";



}