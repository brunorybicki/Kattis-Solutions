#include <stdio.h>
#include <string.h>

void printExpression(int index, char value[][12], int leftSide[], int rightSide[]) {
    if (leftSide[index] == -1) {
        printf("%s", value[index]);
    } else {
        printf("(");
        printExpression(leftSide[index], value, leftSide, rightSide);
        printf("%s", value[index]);
        printExpression(rightSide[index], value, leftSide, rightSide);
        printf(")");
    }
}

int main() {
    char value[5000][12];
    int leftSide[5000];
    int rightSide[5000];

    int stack[5000];
    int stackSize = 0;
    int numOfTokens = 0;

    char token[12];

    while (scanf("%s", token) == 1) {
        strcpy(value[numOfTokens], token);

        leftSide[numOfTokens] = -1;
        rightSide[numOfTokens] = -1;

        if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') {
            rightSide[numOfTokens] = stack[stackSize - 1];
            stackSize--;

            leftSide[numOfTokens] = stack[stackSize - 1];
            stackSize--;
        }

        stack[stackSize] = numOfTokens;
        stackSize++;

        numOfTokens++;
    }

    printExpression(stack[stackSize - 1], value, leftSide, rightSide);
    return 0;
}
