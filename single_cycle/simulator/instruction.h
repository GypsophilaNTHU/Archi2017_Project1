#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <stdio.h>
#include <stdint.h>
const uint32_t op_mask = 0x3f;          //6'b11_1111
const uint32_t reg_mask = 0x1f;         //5'b1_1111
const uint32_t shamt_mask = 0x1f;       //5'b1_1111
//uint32_t funct_mask = 63;     //6'b11_1111
const uint32_t imm_mask = 0xffff;      //16'hFFFF
const uint32_t jaddr_mask = 0x3ffffff; //26'h3FF_FFFF
int rs, rt, rd;

void read_instr(uint32_t im[], int* PC);
#endif // INSTRUCTION_H
