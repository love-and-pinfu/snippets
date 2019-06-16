#include <stdio.h>
int main(){
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int b = 0;
    for ( i = 0; i <= 4; i++)
    {
        b = b + a[i];
    }
    printf("%d",b);
    return 0;
}
