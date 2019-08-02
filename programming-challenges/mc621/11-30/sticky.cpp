#include<bits/stdc++.h>
using namespace std;

int main() {

    bool is_possible = false;
    int n;
    unsigned long long stick;
    vector<unsigned long long> sticks;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> stick;
        sticks.push_back(stick);
    }

    sort(sticks.begin(), sticks.end());

    for (int i = 0; i < n - 2; i++) {

        unsigned long long a = sticks[i], b = sticks[i+1], c = sticks[i+2];

        if (a + b > c) {
            is_possible = true;
            break;
        }

    }

    if (is_possible)
        cout << "possible" << endl;
    else
        cout << "impossible" << endl;

    return 0;

}
