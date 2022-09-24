#include <iostream>
#include <string>
using namespace std;

string word;

void encrypter1() {

	cout << "word to encrypt : " << endl;
	cin >> word;

	for (int a = 0; a < word.length(); a++) {

		word[a] = word[a] + 1;
	};
}

void decrypter1() {

	cout << "word to decrypt : " << endl;
	cin >> word;

	for (int a = 0; a < word.length(); a++) {

		word[a] = word[a] - 1;
	};
}



void main() {
	
	int choice;

	cout << "1 - encrypt"<< endl;
	cout << "2 - decrypt"<< endl;

	cin >> choice;
	
	switch (choice) {
	case 1:
		encrypter1();
		cout << word;
		break;
	case 2:
		decrypter1();
		cout << word;
		break;
	default:
		cout << "invalid";
		

	};
		

}
