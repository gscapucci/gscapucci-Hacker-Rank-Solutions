//https://www.hackerrank.com/challenges/cpp-sets/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        switch (x) {
            case 1:
                s.insert(y);
                break;
            case 2:
                s.erase(y);
                break;
            case 3:
                set<int>::iterator it;
                it = s.find(y);
                if(it == s.end())
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
                break;
        }
    }
    return 0;
}



