#include <stdio.h>
 
int main() {
    int N, x=1, n, contador;
    
    scanf("%d",&N);

    for(int i = 1; i<N; i++){
        x = x*(i+1);
    }   

    printf("%d\n",x);
 
    return 0;
}