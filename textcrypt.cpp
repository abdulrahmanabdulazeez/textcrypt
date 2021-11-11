#include <iostream>
#include <cstring>
#include <fstream>
#include "headers.hpp"

using namespace std;

#define MUCH 999999
int pass;

void Cipher_Encrypt(),Decipher_Decrypt(),head(),winHead();

int main(){
	#if defined(_WIN32)
            system("cls");
    	#else
            system("clear");
    	    #endif
        #if defined(_WIN32)
            winHead();
        #else
            head();
        #endif // defined
    string opt;
    cout << blue << "[1]" << green << " Encrypt a text.\n";
    cout << blue << "[2]" << green << " Decrypt a text.\n\n" << reset;
    cout << yellow << "[!]" << blue << " Select an option: " << reset;
    cout << cyan;
    getline(cin,opt);
    cout << reset;
        if(opt=="1"){
            #if defined(_WIN32)
            system("cls");
    	    #else
            system("clear");
    	    #endif
    	    #if defined(_WIN32)
            winHead();
            #else
                head();
            #endif // defined
            Cipher_Encrypt();
        }
        else if(opt=="2"){
            #if defined(_WIN32)
            system("cls");
    	    #else
            system("clear");
    	    #endif
    	    #if defined(_WIN32)
            winHead();
            #else
                head();
            #endif // defined
            Decipher_Decrypt();
        }
}

void Cipher_Encrypt(){
    cout << blue << "[~]" << cyan << " Enter text to encrypt: " << reset;
    char Ciphertext[MUCH];
    cin.getline(Ciphertext,MUCH);
    cout << blue << "[~] " << cyan << "Enter a password: ";
    cout << reset;
    cin >> pass;
    cout << cyan;
    int sizee=strlen(Ciphertext);
        for(int i=0; i<sizee; i++)
            Ciphertext[i]=Ciphertext[i]+pass;
            cout << "\n[+] Encrypted text is: " << yellow << Ciphertext << endl << cyan;
    cout << "\n[!] Do you want to save encrypted text as a txt file on your desktop so that you can check on it easily[Yes/No]: ";
    string YN;
    cout << reset;
    cin >> YN;
    cout << cyan;
    if(YN=="yes"||YN=="Yes"||YN=="YES"){
        cout << "\n[!] Saving text to a file........\n";
        fstream CFile_Ciphered;
        CFile_Ciphered.open("Encypted.txt", ios::out | ios::app);
            if(!CFile_Ciphered){
                cerr << "[!] Error creating file!!!\n";
                exit(0);
            }
            else if(CFile_Ciphered){
                CFile_Ciphered << "----------Date saved: " << __DATE__
                << "-----------Time saved: " << __TIME__ << "------------\n";
                CFile_Ciphered << "Encrypted text: " << Ciphertext;
                CFile_Ciphered << "\n---------------------------------\n";
                cout << "[!] Text has been saved successfully.\n[!] Note that the ";
                cout << "encrypted text is saved as Encrypted.txt on your desktop!\n";
            }

CFile_Ciphered.close();
    }
    else if(YN=="no"||YN=="No"||YN=="NO"){
        cout << "Ok!";
    }
}

void Decipher_Decrypt(){
    cout << blue << "[~] " << cyan << "Enter the text you want to decrypt: " << reset;
    char Deciphertext[MUCH];
    cin.getline(Deciphertext,MUCH);
    cout << blue << "[~] " << cyan << "Enter the password used for ecnryption: " << reset;
    cin >> pass;
    cout << cyan;
    int sizee=strlen(Deciphertext);
        for(int i=0; i<sizee; i++)
            Deciphertext[i]=Deciphertext[i]-pass;
            cout << "\n[+] Decrypted text is: " << yellow << Deciphertext << endl << reset;
}

