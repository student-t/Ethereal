#ifndef _MOVEGEN_H
#define _MOVEGEN_H

#include <stdint.h> // For uint16_t
#include "types.h" // For Board

void genAllMoves(Board * board, uint16_t * moves, int * size);
void genAllNonQuiet(Board * board, uint16_t * moves, int * size);

int isNotInCheck(Board * board, int turn);
int squareIsAttacked(Board * board, int turn, int sq);

#endif