# Caesar Cipher Encryption and Decryption

## Overview

This project demonstrates the implementation of a Caesar Cipher encryption and decryption algorithm using C/C++. The project consists of two parts: an executable program and a dynamic-link library (DLL). The executable provides a simple command-line interface (CLI) for encrypting and decrypting messages, while the DLL contains the core encryption and decryption functions, which can be reused in other projects.

## Features

- Caesar Cipher Encryption: A simple substitution cipher where each letter in the plaintext is shifted a certain number of places down or up the alphabet.
- Caesar Cipher Decryption: Reverses the encryption process by shifting letters in the opposite direction.
- Dynamic-Link Library (DLL): The core functionality is encapsulated in a DLL, allowing for easy integration into other applications.

## Project Structure

Executable Program:  
> Provides a CLI for users to input text and a key for encryption or decryption.
> Includes functions for both encrypting and decrypting messages.

Dynamic-Link Library (DLL):  
> Contains the encrypt and decrypt functions, which can be called by other programs.


## Usage 

### Executable Program

- Encryption: Users input a raw text and a key. The program outputs the encrypted text.  
- Decryption: Users input the encrypted text and the same key used for encryption. The program outputs the original text.

Example:

``` python
Hello, user!
Enter the text you want to encrypt, and key: 
Roses are red, violets are blue
1
Encrypted text: Sptft bsf sfe, wjpmfut bsf cmvf
Enter the text you want to decrypt, and key: 
Sptft bsf sfe, wjpmfut bsf cmvf
1
Decrypted text: Roses are red, violets are blue
```

### Dynamic-Link Library (DLL)
Functions:
- char* encrypt(char* rawText, int key);
- char* decrypt(char* encryptedText, int key);

These functions can be used to perform encryption and decryption by passing the appropriate text and key.



## Conclusion

This project demonstrates the implementation of a Caesar Cipher for educational purposes. The separation of the core functionality into a DLL allows for modular and reusable code, making it suitable for integration into larger projects.
