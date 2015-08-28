#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 100

char* a;
int b;

void decode() {
	printf("Type in the text which you want to decode: ");
	char text[LEN];
	fgets(text, LEN, stdin);
	if(text[strlen(text) -1] == '\n')
		text[strlen(text) -1] = '\0';
	a=text;
	while(*a) {
		switch(*a) {
			case '%':
				*a = 'a';
				break;
			case '#':
				*a = 'b';
				break;
			case '?':
				*a = 'c';
				break;
			case '~':
				*a = 'd';
				break;
			case '+':
				*a = 'e';
				break;
			case '&':
				*a = 'f';
				break;
			case ';':
				*a = 'g';
				break;
			case '.':
				*a = 'h';
				break;
			case '[':
				*a = 'i';
				break;
			case '@':
				*a = 'j';
				break;			
			case ',':
				*a = 'k';
				break;
			case '}':
				*a = 'l';
				break;
			case '/':
				*a = 'm';
				break;
			case ']':
				*a = 'n';
				break;
			case '-':
				*a = 'o';
				break;
			case '=':
				*a = 'p';
				break;		
			case '_':
				*a = 'q';
				break;
			case '>':
				*a = 'r';
				break;
			case '|':
				*a = 's';
				break;
			case '$':
				*a = 't';
				break;
			case '*':
				*a = 'u';
				break;
			case '(':
				*a = 'v';
				break;
			case '<':
				*a = 'w';
				break;
			case '!':
				*a = 'x';
				break;
			case '7':
				*a = 'y';
				break;
			case ':':
				*a = 'z';
				break;
			default:
				break;
			}
			a++;
		}
		printf("\nText decoded: %s\n", text);
	}

void encode() {
	printf("Type in the text which you want to encode: ");
	char text[LEN];
	fgets(text, LEN, stdin);
	if(text[strlen(text) -1] == '\n')
		text[strlen(text) -1] = '\0';
	a=text;
	while(*a) {
		switch(tolower(*a)) {
			case 'a':
				*a = '%';
				break;
			case 'b':
				*a = '#';
				break;
			case 'c':
				*a = '?';
				break;
			case 'd':
				*a = '~';
				break;
			case 'e':
				*a = '+';
				break;
			case 'f':
				*a = '&';
				break;
			case 'g':
				*a = ';';
				break;
			case 'h':
				*a = '.';
				break;
			case 'i':
				*a = '[';
				break;
			case 'j':
				*a = '@';
				break;			
			case 'k':
				*a = ',';
				break;
			case 'l':
				*a = '}';
				break;
			case 'm':
				*a = '/';
				break;
			case 'n':
				*a = ']';
				break;
			case 'o':
				*a = '-';
				break;
			case 'p':
				*a = '=';
				break;		
			case 'q':
				*a = '_';
				break;
			case 'r':
				*a = '>';
				break;
			case 's':
				*a = '|';
				break;
			case 't':
				*a = '$';
				break;
			case 'u':
				*a = '*';
				break;
			case 'v':
				*a = '(';
				break;
			case 'w':
				*a = '<';
				break;
			case 'x':
				*a = '!';
				break;
			case 'y':
				*a = '7';
				break;
			case 'z':
				*a = ':';
				break;
			default:
				break;
			}
			a++;
		}
	printf("\nText encoded: %s\n", text);
	}

int main() {
	while(b != 3) {
	printf("\n1. Decode (entschlüsseln) Text\n");
	printf("\n2. Encode (verschlüsseln) Text\n");
	printf("\n3. Ende\n");
	printf("\nYour choice: ");
	char x[20];
	fgets(x, 19, stdin);
	b=atoi(x);
	if (b == 1) {
		decode();
	}
	if (b == 2) {
		encode();
	}
 }
	return 0;
}
				
