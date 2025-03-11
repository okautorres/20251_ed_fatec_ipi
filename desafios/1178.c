#include <stdio.h>
 
int main() {
    double N[100];

    scanf("%lf", &N[0]);

    for(int i = 0; i < 100; i++){
        if(i < 99){
            N[i+1] = N[i]/2;
        }
        printf("N[%i] = %.4f\n", i, N[i]);
    }    
 
    return 0;
}