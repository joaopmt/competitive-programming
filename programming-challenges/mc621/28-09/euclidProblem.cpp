#include<bits/stdc++.h>
using namespace std;

int main() {

    int a, b;

    while (cin >> a >> b) {

        int x = 0, x_ant = 1, y = 1, y_ant = 0, d = b, d_ant = a;

        // gcd extendido
        while (d != 0) {

            int intQuocient = d_ant/d;

            int tmp_d = d_ant - d*intQuocient;
            d_ant = d;
            d = tmp_d;

            int tmp_x = x_ant - x*intQuocient;
            x_ant = x;
            x = tmp_x;

            int tmp_y = y_ant - y*intQuocient;
            y_ant = y;
            y = tmp_y;

        }

        cout << x_ant << ' ' << y_ant << ' ' << d_ant << endl;

    }

    return 0;

}
