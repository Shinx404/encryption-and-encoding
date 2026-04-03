#include <stdlib.h>




char * encode_no_padding(char *input){
	int size = sizeof(input)/sizeof(input[0]);
	int *buffer = (int *)malloc(size);
	int temp;

	for(int i = 0; i < size; i++){
		buffer[i] = 0b0 + input[i];
	}
	


	return 
}


int main(int argc, char *argv[]){
	
	return 0;

}
