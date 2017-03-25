#include <bits/stdc++.h>
int reg[32];
int im[1024][32];
int dm[1024][32];
int cycle=0;
int PC=0;
int rd, rs, rt; 
char instr[4];
//control params
int mux1, alu, MemRead, MemWrite, ALUop;
//func 10進位
//變數
void control(int instr) {
	
}

int main(){
	//get iimage, dimage
	//set PC
	//read im for instr
	//case:reg, imm, l/s(base-addr), branch(PC-addr), jump(dir-addr)
	if(type==0) { //r-format
		
	}else if(type==1) { //i-format
		
	}else { //jump
		
	}
	snapshot();
	return 0;
}
