#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string player1, player2;
    cin >> player1 >> player2;
    map<string, int> moves = {
        {"ROCK", 0},
        {"PAPER", 1},
        {"SCISSORS", 2}
    };
    
    int p1 = moves[player1];
    int p2 = moves[player2];
    int result = (p1 - p2 + 3) % 3;
    
    if (result == 0) {
        cout << "DRAW" << endl;
    } else if (result == 1) {
        cout << "PLAYER1" << endl;
    } else {
        cout << "PLAYER2" << endl;
    }
    
    return 0;
}