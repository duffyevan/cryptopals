#include "hexto64.h"
#include <stdlib.h>


char* hexToBase64String(char* hex, int len){
	char *ret = (char*)calloc(len/3*4 + 3,sizeof(char));
	int i;
	int h = 0;
	for (i = 0; i < len; i += 3){
		ret[h++] = numberToBase64Char(hex[i] & 0x3F);
		ret[h++] = numberToBase64Char(((hex[i] & ~0x3F) >> 6) + ((hex[i+1] & 0xF) << 2));
		ret[h++] = numberToBase64Char(((hex[i+1] & 0xF0) >> 4) + ((hex[i+2] & 0x3) << 2));
		ret[h++] = numberToBase64Char((hex[i+2] & ~0x03) >> 2);
	}
	ret[i+1] = 0;
	return ret;
}

char numberToBase64Char(char number){
	if (number >=0 && number <= 25){
		return number + 'A';
	}
	if (number >=26 && number <= 61){
		return number + 'a' - 26;
	}
	else if (number == 62) return '+';
	else return '/';
}