#include<bits/stdc++.h>
using namespace std;

char s[10000000];
char s_[10000000];

void filter(){
    long int n = strlen(s);
    for(long int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i]+32;
    }
    long int j = 0;
    for(long int i = 0; i < n; i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s_[j++] = s[i];
    }
    s_[j] = '\0';
}

bool ispalindrome(char *s){
    int len = strlen(s);
    int i = (len-1)/2;
    int j = len/2;

    while(1){
        if(s[i--] != s[j++]){
            return false;
        }
        if(i < 0 && j >= len) break;
    }

    return true;
}

int main() {

    while(true){
        scanf(" %[^\n]s",s);
        if(!strcmp("DONE",s)) break;
        filter();
        if(ispalindrome(s_)) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
}
