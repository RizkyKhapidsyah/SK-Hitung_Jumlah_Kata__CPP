#pragma warning(disable:4996)

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct kalimat {
	char s[500];
};

struct kalimat obj;

void numberofWords();

int main() {
	cout << "Masukkan kalimat apapun : ";
	fgets(obj.s, 500, stdin);
	numberofWords();

	_getch();
	return 0;
}

void numberofWords() {
	int len = strlen(obj.s);
	cout << "\nPanjangnya adalah : " << len;

	int i;
	int words = 0;

	i = 0;

	while (i < len) {
		if (obj.s[i++] == ' ') {
			words++;
		}
	}

	cout << "\nKata              : " << words + 1;
}