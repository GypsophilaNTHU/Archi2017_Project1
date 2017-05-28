#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//control params
int RegWrite, mux1, alu, MemRead, MemWrite, ALUop;
int32_t reg[36]={0};    //32:PC, 33:HI, 34:LO, 35:$sp
uint32_t im[1024]={0};
int32_t dm[1024]={0};
int *PC = &reg[32];
int *sp = &reg[35];
int cycle=0;
int rd, rs, rt;
char instr[4];

void readBin(FILE* bFile, uint32_t* get);

#endif // SIMULATOR_H
