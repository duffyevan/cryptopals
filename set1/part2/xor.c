#include <stdlib.h>
#include <string.h>

/**
 * XORs 2 **EQUAL LENGTH** Strings 
 * @param string1 First string to be xored
 * @param string2 Second string to be xored
 * @return the result of the xor operation
 */
char *xorStrings(char *string1, char *string2){
	int len = strlen(string1);
	char *ret = calloc(len + 1, sizeof(char));
	int i;
	for (i = 0 ; i < len ; i++){
		ret[i] = string1[i] ^ string2[i];
	}
	ret[++i] = 0;
	return ret;	
}


char *xorStringsn(char *string1, char *string2, int len){
	char *ret = calloc(len + 1, sizeof(char));
	int i;
	for (i = 0 ; i < len ; i++){
		ret[i] = string1[i] ^ string2[i];
	}
	ret[++i] = 0;
	return ret;	
}
