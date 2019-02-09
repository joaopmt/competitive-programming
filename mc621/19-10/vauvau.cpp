#include <stdio.h>
using namespace std;

int main() {

    bool dog1, dog2;
    int a,b,c,d,p,m,g,x;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    scanf("%d %d %d", &p,&m,&g);

    dog1 = dog2 = false;
    x = p / (a+b);
    if(x*(a+b) < p && p <= x*(a+b)+a)
        dog1 = true;
    x = p / (c+d);
    if(x*(c+d) < p && p <= x*(c+d)+c)
        dog2 = true;
    if(dog1 && dog2) printf("both\n");
    else if((dog1 && !dog2) || (!dog1 && dog2)) printf("one\n");
    else printf("none\n");

    dog1 = dog2 = false;
    x = m / (a+b);
    if(x*(a+b) < m && m <= x*(a+b)+a)
        dog1 = true;
    x = m / (c+d);
    if(x*(c+d) < m && m <= x*(c+d)+c)
        dog2 = true;
    if(dog1 && dog2) printf("both\n");
    else if((dog1 && !dog2) || (!dog1 && dog2)) printf("one\n");
    else printf("none\n");

    dog1 = dog2 = false;
    x = g / (a+b);
    if(x*(a+b) < g && g <= x*(a+b)+a)
        dog1 = true;
    x = g / (c+d);
    if(x*(c+d) < g && g <= x*(c+d)+c)
        dog2 = true;
    if(dog1 && dog2) printf("both\n");
    else if((dog1 && !dog2) || (!dog1 && dog2)) printf("one\n");
    else printf("none\n");
}
