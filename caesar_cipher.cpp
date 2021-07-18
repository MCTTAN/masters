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
	int short_shift = shift_amount;
	
	// shift_amount == 13
	// shift_amount == 87
	// shift_amount == 1000
	
	short_shift = shift_amount % 25;
	
	
	for(int i = 0; i <= encrypted_message.length() - 1; ++i) {
		
		if(encrypted_message.at(i) != ' ') {
		    
			if(encrypted_message.at(i) >= 65 || encrypted_message.at(i) <= 90) {

				if(encrypted_message.at(i) + short_shift > 90) {
					encrypted_message.at(i) = 65 + (short_shift - (90 - int(encrypted_message.at(i)))) - 1;
				}

				else{
				    encrypted_message.at(i) = encrypted_message.at(i) + short_shift;
				}

			}

			else if(encrypted_message.at(i) >= 97 || encrypted_message.at(i) <= 122) {

				if(encrypted_message.at(i) + short_shift > 122) {
					encrypted_message.at(i) = 97 + (short_shift - (122 - int(encrypted_message.at(i)))) - 1;
				}

				else{
				    encrypted_message.at(i) = encrypted_message.at(i) + short_shift;
				}

			}
    		
		}
		
	}
	
	return encrypted_message;	
}

int main() {
	
	// string input = "";
	// int shift = 0;
	string sample_string = "BEWARE THE IDES OF MARCH";
	int sample_shift = 13;
	
	// cout << "Enter a message to encrypt: " << endl;
	// cin >> input;
	
	// cout << "Enter the shift amount: " << endl;
	// cin >> shift;
	
	cout << "Original message: " << sample_string << endl;
	cout << "Encrypted message: " << caesar_cipher(sample_string, sample_shift) << endl;
	
	return 0;
}
