#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(int argc, char* argv[]) {

char currentChar;
bool isHex = true;

if(argc >= 2) {
	switch (argv[1]) {
		case "--help": {
			
			break;
		}
		case "dec": {
			isHex = false;
			break;
		}
		case "hex": {
			isHex = true;	
			break;
		}

		
	}

}



for(int i = 0; i < 256; i++) {
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

cout << endl << "Press enter to continue...";
getchar();

return EXIT_SUCCESS;
}
		cout<<i<<". "<<currentChar<<"    ";
	}

	if(i % 6 == 0) {
		cout<<endl;
	}
}

cout << endl << "Press enter to continue...";
getchar();

return EXIT_SUCCESS;
}
