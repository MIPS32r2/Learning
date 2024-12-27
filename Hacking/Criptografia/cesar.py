#!/usr/bin/python3
#~/Learning/Hacking/criptografia/cesar.py


def encrypt(text, s):
    result = "";
    for i in range(len(text)):
        char = text[i];
        if char.isupper() :
            result += chr( (ord(char) + s - 65) % 26 + 65) ;
        else:
            result += chr( (ord(char) + s - 97) % 26 + 97) ;
    return result;

def decrypt(text, s):
    text = text.upper();
    alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    result = "";
    for letter in text:
        if letter in text:
            letter_index = (alpha.find(letter) - s) % len(alpha);
            result += alpha[letter_index];
        else:
            result += letter;
    return result;

print( decrypt( encrypt("ABCDEF", 1), 1) );

