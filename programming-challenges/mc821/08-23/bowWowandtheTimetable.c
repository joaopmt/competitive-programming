#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char s[1000];
    scanf("%s", s);
    int count = 0;
    int i;
    for(i = 0; i < strlen(s); i++){
        if(s[i] == '1') count++;
    }
    if((strlen(s)%2)!=0){
        if(count > 1)
            printf("%d\n", (strlen(s)/2)+1);
        else printf("%d\n", (strlen(s)/2));
    } else printf("%d\n", (strlen(s)/2));
    return 0;
}
