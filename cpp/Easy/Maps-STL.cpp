//https://www.hackerrank.com/challenges/cpp-maps/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> m;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int type, Y;
        string X;
        cin >> type >> X;
        switch (type) {
            case 1:
                cin >> Y;
                m[X] += Y;
                break;
            case 2:
                m.erase(X);
                break;
            case 3:
                cout << (m.find(X) == m.end() ? 0 : m[X]) << endl;
                break;
        }
    } 
    return 0;
}



