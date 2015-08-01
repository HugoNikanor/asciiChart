#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main()
{

char currentChar;

for(int i = 0; i < 256; i++)
{
currentChar = i;

cout<<i<<". "<<currentChar<<"    ";

if(i % 6 == 0)
	cout<<endl;
}

getchar();
return EXIT_SUCCESS;
}
