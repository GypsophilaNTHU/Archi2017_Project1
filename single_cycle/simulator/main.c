#include "./simulator.h"
//#include "./instruction.h"
//func 10進位
//變數
void readBin(FILE* bFile, uint32_t* get)
{
	uint8_t buf[4];
	if (bFile==NULL) {fputs ("File error",stderr); exit (1);}
	fread(buf, 1, sizeof(buf), bFile);
	*get = ( (uint32_t)buf[0]<<24 | (uint32_t)buf[1]<<16 | (uint32_t)buf[2]<<8 | (uint32_t)buf[3] );
}

int main()
{
	//get iimage, dimage
	uint32_t num_im, num_dm ;
    FILE *iimage = fopen("./iimage.bin", "rb");
    FILE *dimage = fopen("./dimage.bin", "rb");
	//set PC
	printf("iimage:\n");
	readBin(iimage, (uint32_t*)PC);
	printf("%08x\n", *PC);
	//read im for instr
	readBin(iimage, &num_im);
	printf("%08x\n", num_im);
	for(int i=0; i<num_im; ++i) {
        readBin(iimage, &im[i]);
        printf("%08x\n", im[i]);
	}
	fclose(iimage);
	printf("\ndimage:\n");
	//set $sp
	readBin(dimage, (uint32_t*)sp);
	printf("%08x\n", *sp);
	//read dm for memory data
	readBin(dimage, &num_dm);
	printf("%08x\n", num_dm);
	for(int i=0; i<num_dm; ++i) {
        readBin(dimage, &dm[i]);
        printf("%08x\n", dm[i]);
	}
	fclose(dimage);
	//case:reg, imm, l/s(base-addr), branch(PC-addr), jump(dir-addr)
    /*while() {
        instrFetch();
        instrDec();
        exec();
        mem();
        writeBack();
    }*/
	return 0;
}
