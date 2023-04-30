#include <stdio.h>

int index(int valor, int array[], int n){
    for(int i = 0; i < n; i++){
        if(array[i] == valor) return i;
    }
}

int contarUltrapassagens(int largada[], int chegada[], int n){
    int
    ultrapassagens = 0,
    i_chegada = 0,
    i_largada = 0,
    j;
    
    for(i_chegada = 0; i_chegada < n; i_chegada++){
        i_largada = index(chegada[i_chegada], largada, n);
        
        if(i_chegada < i_largada){
            ultrapassagens += i_largada - i_chegada;
            
            for(j = i_largada; j > i_chegada; j--)
                largada[j] = largada[j - 1];
                
            largada[i_chegada] = chegada[i_chegada];
        }
    }
    
    return ultrapassagens;
}
 
int main() {
    int
    largada[24] = {0},
    chegada[24] = {0},
    n = 2,
    i = 0;
    
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++)
            scanf("%d", &largada[i]);
            
        for(int i = 0; i < n; i++)
            scanf("%d", &chegada[i]);
            
        printf("%d\n", contarUltrapassagens(largada, chegada, n));
    }
    
    return 0;
}