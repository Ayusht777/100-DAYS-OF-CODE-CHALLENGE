def cryptography():
    """DOCSTRING : use PROJECT_1 as module and the cryptography as  function
    INPUT : NONE
    OUTPUT : encoded or decoded file
    """
    import pyfiglet
    import termcolor
    import os
    from IPython.display import clear_output
    from string import ascii_lowercase

    clear_output()
    text = pyfiglet.Figlet(font="big").renderText("     Cryptography")
    text1 = pyfiglet.Figlet(font="cyberlarge").renderText("-------------------")
    print(termcolor.colored(text1, "red", attrs=["bold"]))
    print(termcolor.colored(text, "cyan", attrs=["bold"]))
    print(termcolor.colored(text1, "red", attrs=["bold"]))
    print(
        termcolor.colored(
            "   TYPE YES / y TO CONTINUE OR NO / n TO EXIT:", "yellow", attrs=["dark"]
        )
    )
    x = str(input()).lower()
    if x == "yes" or x.startswith("y"):

        text_file_ls = []
        for i in os.listdir():
            if i.endswith(".txt"):
                text_file_ls.append(i)
        if (text_file_ls==0):
            print(f"NO TEXT FILE FOUND IN CURRENT DIRECTORY {os.getcwd()}")
            exit
        print(termcolor.colored(text1, "red", attrs=["bold"]))
        print(
            termcolor.colored("LIST OF ALL FILES IN YOUR CURRENT DIRECTORY", "blue"),
            "\n",
        )
        for i in range(len(text_file_ls)):

            print(
                f"{termcolor.colored(i,'red')} : {termcolor.colored(text_file_ls[i],'grey')}"
            )
        print()
        print(
            termcolor.colored(
                "SELECT A NUMBER FORM ABOVE LIST FOR FURTHER PROCESS",
                "magenta",
                attrs=["underline"],
            )
        )
        number_from_list = int(input())
        print(f"THIS FILE IS SELECTED : {text_file_ls[number_from_list]}")
        loop_checker = True
        # the clear screen is not working
        while loop_checker == True:
            clear_output()
            text1 = pyfiglet.Figlet(font="cyberlarge").renderText("-------------------")
            print(termcolor.colored(text1, "red", attrs=["bold"]))
            print(termcolor.colored("1. ENCODE THE FILE", "red", attrs=["blink"]))
            print(termcolor.colored("2. DECODE THE FILE", "red", attrs=["blink"]))
            print()
            select_e_d = int(input("TYPE THE NUMBER FOR FURTHER PROCESS:"))
            if select_e_d == 1 or select_e_d == 2:
                loop_checker = False

                break

            elif select_e_d != 1 or select_e_d != 2:
                print(
                    termcolor.colored(
                        "\nENTER CORRECT NUMBER FORM ABOVE OPTION'S (1 or 2 )",
                        "red",
                        attrs=["bold"],
                    )
                )

        alphabet_list = list(ascii_lowercase) * 2
        if select_e_d == 1:
            with open(text_file_ls[number_from_list], mode="r") as f:
                readerf = f.read()
            readerf = readerf.lower()
            shift_char = int(input("Enter No. Of Letter You Want to shift:"))
            # shift_char will move the user_text to the inputed numbers

            encoded_str = ""
            for char in readerf:
                if char in alphabet_list:
                    index = alphabet_list.index(char)
                    new_index = index + shift_char
                    encoded_str = encoded_str + alphabet_list[new_index]
                # or encoded_str +=alphabet_list[new_index]
                else:
                    encoded_str = encoded_str + char
            f.close()
            with open(text_file_ls[number_from_list], mode="w") as f:
                f.write(encoded_str)
            f.close()
        # print(encoded_str)
        else:
            shift_char = int(input("Enter No. Of Letter to unshift the char :"))
            # shift_char will move the user_text to the inputed numbers
            with open(text_file_ls[number_from_list], mode="r") as f:
                x = f.read()
            f.close()
            decoded_str = ""
            for char in x:
                if char in alphabet_list:
                    index = alphabet_list.index(char)
                    new_index = index - shift_char
                    decoded_str = decoded_str + alphabet_list[new_index]
                # or encoded_str +=alphabet_list[new_index]
                else:
                    decoded_str = decoded_str + char
            f.close()
            with open(text_file_ls[number_from_list], mode="w") as f:
                f.write(decoded_str)
            f.close()
    else:
        exit
