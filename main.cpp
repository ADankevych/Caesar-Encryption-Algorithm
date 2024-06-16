#include <iostream>

using namespace std;

char* encrypt(char* rawText, int key);
char* decrypt(char* encryptedText, int key);

int main() {
    cout << "Hello, user!" << endl << "Enter the text you want to encrypt, and key: " << endl;
    char rawText[100];
    int key;
    cin.getline(rawText, 100);
    cin >> key;
    char* encryptedText = encrypt(rawText, key);
    cout << "Encrypted text: " << encryptedText << endl;
    delete[] encryptedText;
    return 0;
}

char* encrypt(char* rawText, int key) {
    char *encryptedText = new char[strlen(rawText) + 1];
    for (int i = 0; i < strlen(rawText); i++) {
        char element = rawText[i];
        if (element >= 'a' && element <= 'z') {
            element = element + key;
            if (element > 'z') {
                element = element - 'z' + 'a' - 1;
            }
            encryptedText[i] = element;
        } else if (element >= 'A' && element <= 'Z') {
            element = element + key;
            if (element > 'Z') {
                element = element - 'Z' + 'A' - 1;
            }
            encryptedText[i] = element;
        } else {
            encryptedText[i] = element;
        }
    }
    encryptedText[strlen(rawText)] = '\0';

    return encryptedText;
}

char* decrypt(char* encryptedText, int key) {
    return encryptedText;
}