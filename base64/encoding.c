#include <stdlib.h>




char * encode_no_padding(char *input){
	int size = sizeof(input)/sizeof(input[0]);
	int *buffer = (int *)malloc(size);
	int temp = 0x0;

	for(int i = 0; i < size; i++){
		temp = 0x0 + (int)input[i];
		buffer[i] = temp;
	}


	return 
}


int main(int argc, char *argv[]){
	
	return 0;

}
