#include <stdio.h>

int main (void){
    int ergebnis;
    int zahl1;
    int zahl2;
    char operator;

    scanf("%d", &zahl1);
    scanf(" %c", &operator);
    scanf("%d", &zahl2);

    switch (operator) {
        case '+':
            ergebnis = zahl1 + zahl2;
            break;

        case '-':
            ergebnis = zahl1 - zahl2;
            break;
    }

    printf("%d", ergebnis);
    return 0;
}