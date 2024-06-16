#include <iostream>
using namespace std;

char* encrypt(char* rawText, int key);
char* decrypt(char* encryptedText, int key);

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

char* encrypt(char* rawText, int key) {
    return rawText;
}

char* decrypt(char* encryptedText, int key) {
    return encryptedText;
}