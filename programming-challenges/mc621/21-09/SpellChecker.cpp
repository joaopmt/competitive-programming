#include<bits/stdc++.h>
using namespace std;

char c;

int main() {

    int m = 0;
    bool firstWord = true;
    bool firstLetter = true;
    while((c = getc(stdin)) != EOF){
        if(c == '.' || c == '!' || c == '?')
            firstWord = firstLetter = true;
        else if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
            firstWord = true;
        else{
            if(!firstWord && c >= 'A' && c <= 'Z' || firstLetter && c >= 'a' && c <= 'z')
                m++;
            firstWord = firstLetter = false;
        }
    }
    printf("%d\n", m);
    return 0;
}
