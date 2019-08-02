#include<bits/stdc++.h>
using namespace std;

char s[200001];
char s_[200001];

int main() {

    scanf("%s",s);
    int n = strlen(s);
    stack<char> st;
    char c;
    for(int i = 0; i < n; i++){
        if(st.empty())
            c = -1;
        else
            c = st.top();
        if(c == s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    int i = 0;
    while(!st.empty()){
        s[i++] = st.top();
        st.pop();
    }
    i--;
    for(; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
