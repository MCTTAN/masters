#include <iostream>
#include <string>
using namespace std;

string caesar_cipher (string original_message, int shift_amount) {
	
	/*
	
	According to the ASCII table:
	- Uppercase letters have the value range of 65 - 90.
	- Lowercase letters have the value range of 97 - 122.
	
	Assume that you only want to change letter characters only.
	
	*/
	
	string encrypted_message = original_message;
	int short_shift = shift_amount % 26;
	
	// shift_amount == 13
	// shift_amount == 87
	// shift_amount == 1000
	
	for(int i = 0; i <= encrypted_message.length() - 1; ++i) {
		    
		if( (encrypted_message.at(i) >= 'a') && (encrypted_message.at(i) <= 'z') ) {
		    
		    if(encrypted_message.at(i) + short_shift > 122)
		    {
		        encrypted_message.at(i) = 'a' + encrypted_message.at(i) + short_shift - 'z' - 1;
		    }
		    
		    else {
		        encrypted_message.at(i) = encrypted_message.at(i) + short_shift;
		    }
		    
		}
		
		else if( (encrypted_message.at(i) >= 'A') && (encrypted_message.at(i) <= 'Z') ) {
		    if (encrypted_message.at(i) + short_shift > 90)
		    {
		        encrypted_message.at(i) = 'A' + encrypted_message.at(i) + short_shift - 'Z' - 1;
		    }
		    
		    else {
		        encrypted_message.at(i) = encrypted_message.at(i) + short_shift;
		    }
		}
		
	}
	
	return encrypted_message;	
}

int main() {
	
	// string input = "";
	// int shift = 0;
	
	// cout << "Enter a message to encrypt: " << endl;
	// cin >> input;
	
	// cout << "Enter the shift amount: " << endl;
	// cin >> shift;
	
	cout << "Original message: " << "BEWARE THE IDES OF MARCH" << endl;
	cout << "Encrypted message: " << caesar_cipher("BEWARE THE IDES OF MARCH", 13) << endl << endl;
	
	cout << "Original message: " << "middle-Outz" << endl;
	cout << "Encrypted message: " << caesar_cipher("middle-Outz", 2) << endl << endl;
	
	cout << "Original message: " << "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ" << endl;
	cout << "Encrypted message: " << caesar_cipher("abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ", 2) << endl << endl;
	
	return 0;
}
