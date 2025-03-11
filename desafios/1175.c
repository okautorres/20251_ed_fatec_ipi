#include <stdio.h>
 
int main() {
    int N[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    for(int i = 0, j = 19; i < j; i++, j--){
         int temp = N[i]; 
         N[i] = N[j];
         N[j] = temp;
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }


    return 0;
}