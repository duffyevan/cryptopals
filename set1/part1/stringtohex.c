#include <stdlib.h>
#include <string.h>
#include "stringtohex.h"


char* hexStringToCharArray(char *string){
	char *ret = (char *)calloc(strlen(string)/2 + 1,sizeof(char));
	int i = 0;
	for (i = 0; i < (strlen(string)/2)+1; i += 1){
		ret[i] = twoCharsToByte(string+(i*2));
	}
	ret[i+1] = 0;
	return ret;
}

char twoCharsToByte(char *string){
	char currentByte = 0;
	currentByte += hexCharToNumber(string[0]);
	currentByte = currentByte << 4;
	currentByte += hexCharToNumber(string[1]);
	return currentByte;
}

char hexCharToNumber(char c){
	char ret = 0;
	if (c >= 48 && c <= 57){
		ret = c-48;		
	}
	else if (c >= 97 && c <= 102){
		ret = (c-97)+10;
	}
	else if (c >= 65 && c <= 70){
		ret = (c-65)+10;
	}
	return ret;
}