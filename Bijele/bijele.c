#include <stdio.h>

int main() {
    int king, queen, rook, bishop, knight, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    
    int targetKing = 1, targetQueen = 1, targetRook = 2, targetBishop = 2, targetKnight = 2, targetPawn = 8;
    printf("%d %d %d %d %d %d", targetKing - king, targetQueen - queen, targetRook - rook, targetBishop - bishop, targetKnight - knight, targetPawn - pawn);

    return 0;
}
