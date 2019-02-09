#include <stdio.h>
#include <stdlib.h>

int main(void){
     char l1[5], l2[5];

     scanf("%s %s", l1, l2);

     if(atoi(l1)%2==0 || atoi(l2)%2==1)
        printf("yes");
    else printf("no");

	return 0;
}
