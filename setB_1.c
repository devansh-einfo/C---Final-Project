#include<stdio.h>
#include<stdlib.h>
#define BITS 3
#define INTB (sizeof(int) * BITS)
void bin(unsigned n){
	short int i;
	for(i = (INTB -1); i>=0; i--){
		(n & (1 << i)) ? printf("1"): printf("0");	
	} 	
}
unsigned int revb(unsigned int num){
	unsigned int loop = 0;
	unsigned int tmp = 0;
	int nloop = (INTB - 1);
for(; loop<nloop; loop++){
	tmp |= num & 1;
	num >>= 1;
	tmp <<= 1;
}
	return tmp;
}
int main(){
	unsigned int data = 0;
	unsigned int ret = 0;
	printf("Enter Number:\n");
	scanf("%u", &data);
	printf("Binary data is\n");
	bin(data);
	ret = revb(data);
	printf("Reverse: \n");
	bin(ret);
return 0;
}
	
