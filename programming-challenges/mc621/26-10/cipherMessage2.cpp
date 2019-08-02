#include<stdio.h>
#include<string.h>

char s[200001];

int main() {

    scanf("%s",s);
    int n = strlen(s);
    for(int i = 1; i < n; i++){
        int j = i-1;
        if(s[i] == s[j]){
            for(; j < n-2; j++)
                s[j] = s[j+2];
            s[j] = '\0';
            n -= 2;
            i -= 2;
        }
    }
    printf("%s\n", s);
    return 0;
}
