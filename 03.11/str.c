#include <stdio.h>
#include "prog1.h"
void megcserel(string s, int meret)
{
	char temp = s[0];
	s[0] = s[meret];
	s[meret] = temp;
}

int main()
{
	//string s1;
	//printf("%s\n", s1);

	string s2 = "String2";
	printf("%s\n",s2);

	printf("%c\n", s2[0]);
	puts(s2);














	return 0;
}
