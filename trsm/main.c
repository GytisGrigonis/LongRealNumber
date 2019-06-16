#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define LENGTH 256

int main()
{
    int check;
    char number1[LENGTH], number2[LENGTH];
    int sym;
    printf("Iveskite pirma skaiciu: ");
    scanf("%s/n", number1);
    printf("Iveskite antra skaiciu: ");
    scanf("%s/n", number2);
    printf("Iveskite aritmetine operacija:\nsudetis 1\natimtis 2\ndaugyba 3\ndalyba 4\n");
    scanf("%d/n", &sym);
    bigInt a = createBigInt(&check, number1);
    bigInt b = createBigInt(&check, number2);
    bigInt c = createBigInt(&check, "\0");
    if(sym == 1) bigAdd(a, b, &c, &check);
    if(sym == 2) bigSubtract(a, b, &c, &check);
    if(sym == 3) bigMultiply(a, b, &c, &check);
    if(sym == 4) bigDivide(a, b, &c, &check);
    if(check == 1)
        printf("Klaida");
    if(check == 3)
        printf("Negalima atimti is mazesnio didesni skaiciu");
    if(check == 2)
        printf("Dalyba is nulio negalima");
    if(check == 0){
        printf("Gauname: ");
        printList(c);
        bigInt d;
        printf("\nPasirinkite tolimesni veiksma:\nbaigti 0\nsudetis 1\natimtis 2\ndaugyba 3\ndalyba 4\n");
        scanf("%d/n", &sym);
        while(sym != 0){
            printf("Iveskite skaiciu: ");
            scanf("%s/n", number1);
            a = createBigInt(&check, number1);
            d = createBigInt(&check, "\0");
            if(sym == 1) bigAdd(c, a, &d, &check);
            if(sym == 2) bigSubtract(c, a, &d, &check);
            if(sym == 3) bigMultiply(c, a, &d, &check);
            if(sym == 4) bigDivide(c, a, &d, &check);
            if(check == 1) printf
                ("Klaida");
            if(check == 3) printf
                ("Negalima atimti is mazesnio didesni skaiciu");
            if(check == 2) printf
                ("Dalyba is nulio negalima");
            if(check == 0){
                printf("Gauname: ");
                printList(d);
                c = d;
                printf("\nPasirinkite tolimesni veiksma:\nbaigti 0\nsudetis 1\natimtis 2\ndaugyba 3\ndalyba 4\n");
                scanf("%d/n", &sym);
            }
            else
                sym = 0;
        }
    }
    return 0;
}
