#include<stdio.h>
#include<string.h>

char s[200002];

bool ispalindrome(char *s){
    int len = strlen(s);
    int i = (len-1)/2;
    int j = len/2;

    bool flag = true;
    while(1){
        if(s[i--] != s[j++]){
            flag = false;
            break;
        }
        if(i < 0 && j >= len) break;
    }

    return flag;
}

int ispalindrome_at(char *s, int k){
    int i = k;
    int j = k;

    while(1){
        if(s[i--] != s[j++]){
            i = -1;
            break;
        }
        if(j >= strlen(s)){
            break;
        }
    }

    return i;
}

int main() {

    while((scanf("%s", s)) != EOF){
        int len = strlen(s);
        if(ispalindrome(s)){
            printf("%s\n", s);
            continue;
        }
        int j;
        if(len%2 == 0) j = len/2;
        else j = (len+1)/2;
        while(1){
            int i = ispalindrome_at(s,j++);
            if(i != -1){
                int k = len;
                char last = s[len-1];
                while(s[i] == last) i--;
                while(i >= 0) s[k++] = s[i--];
                s[k] = '\0';
                printf("%s\n", s);
                break;
            }
            if(j >= len){
                printf("%s", s);
                char last = s[len-1];
                int l = len-1;
                while(s[l] == last) l--;
                while(l >= 0) printf("%c", s[l--]);
                printf("\n");
                break;
            }
        }
    }

    return 0;
}