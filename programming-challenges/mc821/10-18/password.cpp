// TODO gets TLE

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string ans("");
    for(int i = s.size(); i > 0 ; i--){
        string prefix = s.substr(0, i);
        string suffix = s.substr(s.size()-i);
        if(prefix == suffix){
            int mid_i = s.find(prefix, 1);
            if(mid_i == string::npos || mid_i >= (s.size()-i))
                continue;
            ans = prefix;
            break;
        }
    }
    std::cout << ((ans.size() > 0) ? ans : "Just a legend") << std::endl;

    return 0;
}
