#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
int main() {
    int nombre1, nombre2;
    char choix;

    printf("Premier Nombre : ");
    scanf("%d",&nombre1);
    getc(stdin);
    printf("Opérateur : ");
    scanf("%c",&choix);
    printf("Deuxième nombre : ");
    scanf("%d",&nombre2);

    switch(choix) {
        case '+' :
            printf("%d + %d = %d\n", nombre1, nombre2, nombre1 + nombre2);
            break;
        case '-' :
            printf("%d - %d = %d\n", nombre1, nombre2, nombre1 - nombre2);
            break;
        case '*' :
            printf("%d x %d = %d\n", nombre1, nombre2, nombre1 * nombre2);
            break;
        case '/' :
            if (nombre2 != 0) {
                printf("%d / %d = %.4f\n", nombre1, nombre2,(float) nombre1 / nombre2);
            }
            else {
                printf("Math Error");
            }
            break;
            default : printf("Opérateur inconnue");
    }
    return 0;
}
