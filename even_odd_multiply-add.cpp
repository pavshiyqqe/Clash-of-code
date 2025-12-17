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
    int count,o=0;
    cin >> count; cin.ignore();
    for (int i = 0; i < count; i++) {
        int number;
        cin >> number; cin.ignore();
        if (number%2!=0)
            o*=number;
        else
            o+=number;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << o;
}