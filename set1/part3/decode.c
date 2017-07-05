#include <string.h>
#include <stdlib.h>


char *applyXOR(char *cipher, char key){
	int len = strlen(cipher);
	char *ret = calloc(len, sizeof(char));
	strncpy(ret, cipher, len); // TODO AHHHHH NEVER DO THIS!!! (plz use strncpy)
	int i;
	for (i = 0; i < len; i++){
		ret[i] = ret[i] ^ key;
	}
	return ret;
}

int isValidString(char *string, int len){
	for (int i = 0; i < len; i++){
		if (string[i] < 32 || string[i] > 127)
			return 0;
	}
	return 1;
}

int isPossiblyEnglish(char *string){
	if (string[0] >= 'A' && string[0] <= 'Z'
		&& string [1] >= 'a' && string[1] <= 'z'
		&& string [2] >= 'a' && string[2] <= 'z')
		return 1;
	else return 0;

}

int isVoul(char c){
	char vouls[] = {'a','e','i','o','u','y','A','E','I','O','U','Y'};
	for (int i = 0; i < 12; i ++){
		if (c == vouls[i])
			return 1;
	}
	return 0;
}

int isLetter(char c){
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isNumber(char c){
	return c >= '0' && c <= '9';
}
