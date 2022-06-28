#include <stdio.h>
#include <math.h>

int main(){
    
    int a=0
    int q=0;
    int res=0;
    
    scanf("%d", &a);
    scanf("%d", &q);
    
    res = (a*(pow(q,10) - 1)) / (q - 1);
    printf("%d", res);
    
}
