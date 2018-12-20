// StringPractice.cpp : Defines the entry point for the console application.
//

#include <string.h>
#include <stdio.h>
#include "stdafx.h"

void Reverse(char* _string);

int main(int argc, char* argv[])
{
	char _string[255] = "Hello World!\n";

	printf(_string);
	Reverse(_string);

	getchar();
	return 0;
}

void Reverse(char* _string)
{
	int len;
	len = strlen(_string);
	int x,y;
	char temp;

	if ( !(strlen(_string) % 2) )
		y = len/2;
	else
		y = (len-1)/2;
	for( x = 0; x < y; x++ )
	{
		temp = _string[x];
		_string[x] = _string[len-2-x];
		_string[len-2-x] = temp;
	}

	printf("Reversed....\n");
	printf(_string);
}

