#include <iostream>
#include "caesar.cpp"
#include <dlfcn.h>
using namespace std;

typedef char* (*encrypt_ptr_t)(char*, int);
typedef char* (*decrypt_ptr_t)(char*, int);

int main() {
    void* handle = dlopen("./caesar.so", RTLD_LAZY);
    if (handle == nullptr) {
        cout << "Lib not found" << endl;
        return -1;
    }

    encrypt_ptr_t encrypt_ptr = (encrypt_ptr_t)dlsym(handle, "encrypt");
    decrypt_ptr_t decrypt_ptr = (decrypt_ptr_t)dlsym(handle, "decrypt");

    int option;
    cout << "Choose the option: 1 - use the encrypt, 2 - use the decrypt " << endl;
    cin >> option;
    cin.ignore();
    if (option == 1){
        char rawText[100];
        int key;
        cout << "Enter the text you want to encrypt, and key: " << endl;
        cin.getline(rawText, 100);
        cin >> key;
        cin.ignore();
        char* encryptedText = encrypt_ptr(rawText, key);
        cout << "Encrypted text: " << encryptedText << endl;
        delete[] encryptedText;
    } else if (option == 2){
        cout << "Enter the text you want to decrypt, and key: " << endl;
        char textForDecrypt[100];
        int keyForDecrypt;
        cin.getline(textForDecrypt, 100);
        cin >> keyForDecrypt;
        cin.ignore();
        char* decryptedText = decrypt_ptr(textForDecrypt, keyForDecrypt);
        cout << "Decrypted text: " << decryptedText << endl;
        delete[] decryptedText;
    } else {
        cout << "Invalid option" << endl;
    }

    dlclose(handle);

    return 0;
}
