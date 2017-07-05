#include <stdio.h>
#include "stringtohex.h"
#include "decode.h"
#include <string.h>

int main(){
	char *cipher = hexStringToCharArray("1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736");
	int len = strlen(cipher);
	for(int x = 0; x < 256; x++){
		char *decoded = applyXOR(cipher, (char)x);
		if (isValidString(decoded, len) && isPossiblyEnglish(decoded))
			printf("%s\n", decoded);
	}
	return 0;
}
