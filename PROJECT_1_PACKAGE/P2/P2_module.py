def menu():
    import pyfiglet
    import termcolor
    import os
    from IPython.display import clear_output as cl
    text = pyfiglet.Figlet(font='big').renderText('     Cryptography')
    text1 = pyfiglet.Figlet(font='cyberlarge').renderText(
        '-------------------')
    print(termcolor.colored(text1, 'red', attrs=['bold']))
    print(termcolor.colored(text, 'cyan', attrs=['bold']))
    print(termcolor.colored(text1, 'red', attrs=['bold']))
    print(termcolor.colored("   TYPE YES / y TO CONTINUE OR NO / n TO EXIT:", 'yellow', attrs=['dark']))
    x = str(input()).lower()
    if(x == 'yes' or x.startswith('y')):
        cl()
        text_file_ls = []
        for i in os.listdir():
            if(i.endswith('.txt')):
                text_file_ls.append(i)
        print(termcolor.colored(text1, 'red', attrs=['bold']))
        print(termcolor.colored("LIST OF ALL FILES IN YOUR CURRENT DIRECTORY",'blue'),'\n')
        for i in range(len(text_file_ls)):

            print(f"{termcolor.colored(i,'red')} : {termcolor.colored(text_file_ls[i],'grey')}")
        print()
        print(termcolor.colored("SELECT A NUMBER FORM ABOVE LIST FOR FURTHER PROCESS",'magenta',attrs=['underline']))
        number_from_list = int(input())
        return(text_file_ls[number_from_list])







