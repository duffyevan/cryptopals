#include <stdio.h>
#include "stringtohex.h"
#include "xor.h"

int main(){
	printf("%s", xorStringsn(hexStringToCharArray("1c0111001f010100061a024b53535009181c"),hexStringToCharArray("686974207468652062756c6c277320657965"),18));	
	return 0;
}
