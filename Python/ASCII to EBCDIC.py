#Create a program that will convert ASCII to EBCDIC and vice versa. Use any programming language that you know.

def ascii_to_ebcdic(text):
    ebcdic_text = ""
    for char in text:
        ascii_code = ord(char)  # Get ASCII code of the character
        ebcdic_code = ascii_code + 64  # Convert ASCII to EBCDIC
        ebcdic_text += chr(ebcdic_code)  # Convert back to character
    return ebcdic_text


def ebcdic_to_ascii(text):
    ascii_text = ""
    for char in text:
        ebcdic_code = ord(char)  # Get EBCDIC code of the character
        ascii_code = ebcdic_code - 64  # Convert EBCDIC to ASCII
        ascii_text += chr(ascii_code)  # Convert back to character
    return ascii_text


def main():
    choice = input("Enter 'a' for ASCII to EBCDIC conversion, or 'e' for EBCDIC to ASCII conversion: ")
    input_text = input("Enter the text to convert: ")

    if choice == 'a':
        converted_text = ascii_to_ebcdic(input_text)
        print("EBCDIC:", converted_text)
    elif choice == 'e':
        converted_text = ebcdic_to_ascii(input_text)
        print("ASCII:", converted_text)
    else:
        print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
    
    #72 101 108 108 111
    #wrqpqqpxqpxqqq