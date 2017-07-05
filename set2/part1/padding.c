#include <stdlib.h>
#include <string.h>


char* paddTo(char* string, int blockSize){
	int len = strlen(string);
	int paddedLength = ((len / blockSize) + 1) * blockSize + 1;
	char *ret = calloc(paddedLength, sizeof(char));
	strncpy(ret, string, len);
	int i;
	for (i = len; i < paddedLength-1; i++){
		ret[i] = 0x4;
	}
	ret[paddedLength-1] = 0;
	return ret;
}

char* paddnTo(char* string, int blockSize, int len){
	int paddedLength = ((len / blockSize) + 1) * blockSize + 1;
	char *ret = calloc(paddedLength, sizeof(char));
	strncpy(ret, string, len);
	int i;
	for (i = len; i < paddedLength-1; i++){
		ret[i] = 0x4;
	}
	ret[paddedLength-1] = 0;
	return ret;
}

char* readablePaddTo(char* string, int blockSize){
	int len = strlen(string);
	int paddedLength = ((len / blockSize) + 1) * blockSize + 1;
	char *ret = calloc(paddedLength, sizeof(char));
	strncpy(ret, string, len);
	int i;
	for (i = len; i < paddedLength-1; i++){
		ret[i] = '_';
	}
	ret[paddedLength-1] = 0;
	return ret;
}
