#include <stdio.h>
 
void tabuada(int, int);
 
int main() {
    int n = 0;
    
    scanf("%d", &n);
    
    tabuada(n, 1);
 
    return 0;
}

void tabuada(int n, int i){
    if(i < 11){
        printf("%d x %d = %d\n", i, n, n * i);
        tabuada(n, i + 1);
    }
}
