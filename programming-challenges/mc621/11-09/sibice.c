#include<stdio.h>
#include <math.h>

int main() {
    int n, w, h, len;

    scanf("%d %d %d", &n, &w, &h);
    double diag = sqrt(w*w + h*h);
    while(n--){
        scanf("%d", &len);
        if(len <= diag) printf("DA\n");
        else printf("NE\n");
    }
    return 0;
}
