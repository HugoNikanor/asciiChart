#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {

char currentChar;
bool isHex = true;

if(argc >= 2) {
	if(strcmp(argv[1], "--help") == 0) {
		cout <<
		"--help - print this help" << endl <<
		"dec - output in decimal" << endl << 
		"hex - output in hexadecimal (default)" << endl;
		return EXIT_FAILURE;
	}
	else if(strcmp(argv[1], "dec") == 0) {
		isHex = false;
	}
	else if(strcmp(argv[1], "hex") == 0) {
		isHex = true;	
	}
}

cout << "special characters:" << endl <<
        "--------------------------------" << endl;
if(isHex) {
	cout <<
	hex << 0 << ". null" << endl <<
	hex << 7 << ". audibly ping" << endl <<
	hex << 9 << ". tab" << endl <<
	hex << 10 << ". linefeed" << endl <<
	hex << 13 << ". carriage return" << endl <<
	hex << 14 << ". shift out" << endl <<
	hex << 15 << ". shift in" << endl; 
} else {
	cout <<
	dec << 0 << ". null" << endl <<
	dec << 7 << ". audibly ping" << endl <<
	dec << 9 << ". tab" << endl <<
	dec << 10 << ". linefeed" << endl <<
	dec << 13 << ". carriage return" << endl <<
	dec << 14 << ". shift out" << endl <<
	dec << 15 << ". shift in" << endl; 
}


cout << endl << "regular characters:" << endl <<
        "--------------------------------" << endl;

for(int i = 0; i < 256; i++) {
	if(!(
		i == 0  ||     
		i == 7  ||
		i == 9  ||
		i == 10 ||
		i == 13 ||
		i == 14 ||
		i == 15 )) {
	
	currentChar = i;

	if(isHex) {
		cout << hex << i << ". " << currentChar << "    ";
	} else {
		cout << dec << i << ". " << currentChar << "    ";
	}

	if(i % 6 == 0) {
		cout << endl;
	}
	}
}

cout << endl << "Press enter to continue...";
getchar();

return EXIT_SUCCESS;
}
