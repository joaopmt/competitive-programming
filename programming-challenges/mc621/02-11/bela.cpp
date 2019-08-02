#include <iostream>

using namespace std;

int main(){
    int n;
    char ds, cnumber, csuit;
    
    scanf("%d %c", &n, &ds);

    int sum = 0;
    n *= 4;
    while(n--){
        scanf(" %c%c", &cnumber, &csuit);
        switch(cnumber){
            case 'A':
                if(csuit == ds)
                    sum += 11;
                else
                    sum += 11;
                break;
            case 'K':
                if(csuit == ds)
                    sum += 4;
                else
                    sum += 4;
                break;
            case 'Q':
                if(csuit == ds)
                    sum += 3;
                else
                    sum += 3;
                break;
            case 'J':
                if(csuit == ds)
                    sum += 20;
                else
                    sum += 2;
                break;
            case 'T':
                if(csuit == ds)
                    sum += 10;
                else
                    sum += 10;
                break;
            case '9':
                if(csuit == ds)
                    sum += 14;
                else
                    sum += 0;
                break;
            case '8':
                if(csuit == ds)
                    sum += 0;
                else
                    sum += 0;
                break;
            case '7':
                if(csuit == ds)
                    sum += 0;
                else
                    sum += 0;
                break;
        }
    }
    
    printf("%d\n", sum);

    return 0;
}
