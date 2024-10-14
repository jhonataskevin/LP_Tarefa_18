#include <stdio.h>
int main(){

    int i=1, X;

    while (X!=0){
        scanf("%d", &X);
        while (i<X){
            printf("%d ", i);
            i++;
        }
        if (X!=0){
            i=1;
            printf("%d\n", X);
        }   
    }
    return 0;
}
