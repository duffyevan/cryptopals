#include "hexto64.h"
#include <stdlib.h>


char* hexToBase64String(char* hex, int len){
	char *ret = (char*)calloc(len/3*4 + 3,sizeof(char));
	int i;
	int h = 0;
	for (i = 0; i < len; i += 3){
		ret[h++] = numberToBase64Char((hex[i] & ~0x03) >> 2);
		ret[h++] = numberToBase64Char(((hex[i+1] & 0xF0) >> 4) + ((hex[i] & 0x3) << 4));
		ret[h++] = numberToBase64Char(((hex[i+2] & 0xC0) >> 6) + ((hex[i+1] & 0xF) << 2));
		ret[h++] = numberToBase64Char(hex[i+2] & 0x3F);
	}
	ret[i+1] = 0;
	return ret;
}

char numberToBase64Char(char number){
	if (number >=0 && number <= 25){
		return number + 'A';
	}
	if (number >=26 && number <= 51){
		return (number-26) + 'a';
	}
	if (number >= 52 && number <= 61){
		return (number-52) + '0';
	}
	else if (number == 62) return '+';
	else return '/';
}
