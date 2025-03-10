#include <stdio.h>
 
int main() {
    double a1, b1, c1;
    double a, b, c;
    scanf("%lf %lf %lf",&a1,&b1,&c1);

    if(a1 >= b1 && a1 >= c1){
        a = a1;
        if(b1>=c1){
        b = b1;
        c = c1;
        } else {
            c = b1;
            b = c1;
        }
    }
    else if(b1 >= a1 && b1 >= c1){
        a = b1;
        if(a1>=c1){
            b = a1;
            c = c1;
            } else {
                c = a1;
                b = c1;
            }
    } else {
        a = c1;
        if(b1>=a1){
            b = b1;
            c = a1;
        } else {
            c = b1;
            b = a1;
        }
    }

    if(a >= (b + c)){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    } else if (a*a == b*b+c*c){
        printf("TRIANGULO RETANGULO\n");
    } else if (a*a > b*b+c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (a*a<b*b+c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a==b && a==c){
        printf("TRIANGULO EQUILATERO\n");
    } else if (a==b || b==c || a==c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}   