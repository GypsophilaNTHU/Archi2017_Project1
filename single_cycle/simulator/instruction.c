#include "./instruction.h"
#define R_TYPE  0x00
// I_TYPE
#define ADDI    0x08
#define ADDIU   0x09
#define LW      0x23
#define LH      0x21
#define LHU     0x25
#define LB      0x20
#define LBU     0x24
#define SW      0x2b
#define SH      0x29
#define SB      0x28
#define LUI     0x0f
#define ANDI    0x0c
#define ORI     0x0d
#define NORI    0x0e
#define SLTI    0x0a
#define BEQ     0x04
#define BNE     0x05
#define BGTZ    0x07
// J_TYPE
#define JUMP    0x02
#define JAL     0x03
// Special_Type
#define HALT    0x3f

uint32_t readOp (uint32_t instr) {
    uint32_t op = op_mask<<26;
    op &= instr;
    op >>= 26;
    return op;
}
void readRs (uint32_t instr) {
    rs = reg_mask<<21;
    rs &= instr;
    rs >>= 21;
}
void readRt (uint32_t instr) {
    rt = reg_mask<<16;
    rt &= instr;
    rt >>= 16;
}
void readRd (uint32_t instr) {
    rd = reg_mask<<11;
    rd &= instr;
    rd >>= 11;
}
int readShamt(uint32_t instr) {
    int shamt = shamt_mask<<6;
    shamt &= instr;
    shamt >>= 6;
}
void readInstr(uint32_t im[], int* PC) {
    unsigned int index = (*PC);
    // if(index<0) error();
    index >>= 2;
    uint32_t instr = im[index];
    int op = (int) readOp(instr);
    switch (op) {
        case R_TYPE:
            readRs(instr);
            readRt(instr);
            readRd(instr);
    }
}
