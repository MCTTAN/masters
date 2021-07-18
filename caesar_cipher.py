'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''

sample_string = "BEWARE THE IDES OF MARCH"
sample_shift = 13

short_shift = sample_shift % 25
encrypted_string = ""

for i in range(0, len(sample_string) - 1) :
    if (sample_string[i] == ' ') :
        encrypted_string += ' '
    elif ( sample_string[i].isupper() ) :
        if( (ord(sample_string[i]) + short_shift > 90) ) :
            encrypted_string += chr( 65 + (short_shift - (90 - ord(sample_string[i]))) - 1 )
        else :
            encrypted_string += chr( ord(sample_string[i]) + short_shift )
    elif ( sample_string[i].islower() ) :
        if( (ord(sample_string[i]) + short_shift > 122) ) :
            encrypted_string += chr( 97 + (short_shift - (122 - ord(sample_string[i]))) - 1)
        else :
            encrypted_string += chr( ord(sample_string[i]) + short_shift )

print("Original message: ", sample_string, "\n")
print("Encrypted message: ", encrypted_string)
