#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	string string;
	cout << "Введите строку \n";
	cin >> string;
	int latinCount = 0;
	for (int i = 0; i < string.length(); i++) {
		if (((string[i] >= 'A') && (string[i] <= 'Z')) || ((string[i] >= 'a') && (string[i] <= 'z'))) {
			latinCount++; cout << 1;
		}
	}
	cout << "В заданном тексте " << latinCount << " латинских букв \n";
	return 0;
}
