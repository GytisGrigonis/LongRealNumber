#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct Element {
    struct Element *forw, *backw;
    int data;
};

typedef struct Element Big_int;
typedef Big_int* bigInt;

bigInt getTail(Big_int *);
int printList(Big_int *);
int deleteList(Big_int **);
int getListSize(Big_int *);
int checkIfNumber(const char *);
void swapPtr(Big_int **, Big_int **);
void insertBegin(Big_int **, int);
void deleteFirstElement(Big_int **);
void copyList(Big_int *, Big_int **);

int sum(Big_int*, Big_int*, Big_int**);
int subtraction(Big_int*, Big_int*, Big_int**);
int multiplication(Big_int*, Big_int*, Big_int**);
int division(Big_int*, Big_int*, Big_int**);

bigInt createBigInt(int *, char *);
void bigAdd(bigInt, bigInt, bigInt *, int *);
void bigSubtract(bigInt, bigInt, bigInt *, int *);
void bigMultiply(bigInt, bigInt, bigInt *, int *);
void bigDivide(bigInt, bigInt, bigInt *, int *);


#endif // HEADER_H_INCLUDED
