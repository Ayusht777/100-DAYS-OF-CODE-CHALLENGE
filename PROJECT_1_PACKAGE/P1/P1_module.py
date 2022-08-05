# this the module for ceaser chipher project
# main part of the function

def caesar_cipher():
    user_choice = str(
        input("Type Encode for encoding or Decode for decoding the text :")).lower()
    # the user_choice will take input from user to decode the text or encode it
    user_text = str(
        input(f"Enter The Text You Want To {user_choice}:")).lower()
    # user_tetx will take the main message or text we want to encode or decode
    shift_char = int(input("Enter No. Of Letter You Want to shift:"))
    # shift_char will move the user_text to the inputed numbers
    from string import ascii_lowercase
    alphabet_list = list(ascii_lowercase)*2
    if (user_choice == "encode"):
        encoded_str = ''
        for char in user_text:
            if(char in alphabet_list):
                index = alphabet_list.index(char)
                new_index = index + shift_char
                encoded_str = encoded_str + alphabet_list[new_index]
                # or encoded_str +=alphabet_list[new_index]
            else:
                encoded_str = encoded_str + char
        print(encoded_str)
    elif(user_choice == 'decode'):
        decoded_str = ''
        for char in user_text:
            if(char in alphabet_list):
                index = alphabet_list.index(char)
                new_index = index - shift_char
                decoded_str = decoded_str + alphabet_list[new_index]
                # or encoded_str +=alphabet_list[new_index]
            else:
                decoded_str = decoded_str + char
        print(decoded_str)



