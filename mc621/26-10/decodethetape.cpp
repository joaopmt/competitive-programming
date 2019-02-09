#include<bits/stdc++.h>
using namespace std;

char s[12];

int main() {

    fgets(s, 20, stdin);
    while(true){
        fgets(s, 20, stdin);
        if(s[0] == '_') break;
        char dec = 0;
        if(s[2] == 'o') dec += 64;
        if(s[3] == 'o') dec += 32;
        if(s[4] == 'o') dec += 16;
        if(s[5] == 'o') dec += 8;
        if(s[7] == 'o') dec += 4;
        if(s[8] == 'o') dec += 2;
        if(s[9] == 'o') dec += 1;
        printf("%c", dec);
    }
    return 0;
}
