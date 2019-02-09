#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    string name, susp1, susp2;
    vector<string> walter, jesse;

    cin >> n;

    for (int i = 0; i < n-1; i++) {
        cin >> name;
        walter.push_back(name);
    }

    cin >> name;
    jesse.push_back(name);

    cin >> m;

    for (int i = 0; i < m; i++) {

        cin >> susp1 >> susp2;

        bool susp1_found = find(walter.begin(), walter.end(), susp1) != last;
        bool susp2_found = find(walter.begin(), walter.end(), susp2) != last;

        if (susp1_found && susp2_found) {



        }

    }




}
