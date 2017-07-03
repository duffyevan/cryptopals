#include <stdio.h>
#include <string.h>
#include "stringtohex.h"
#include "hexto64.h"


int main(int argc,char ** argv){
	char *hex = hexStringToCharArray("49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d");
	//char *hex = "Man is distinguished, not only by his reason, but by this singular passion from other animals, which is a lust of the mind, that by a perseverance of delight in the continued and indefatigable generation of knowledge, exceeds the short vehemence of any carnal pleasure.";
	int len = strlen(hex);
	printf("%s\n", hexToBase64String(hex, len));
	return 0;
}



