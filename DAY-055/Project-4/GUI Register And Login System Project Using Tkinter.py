import sys
from tkinter import *
from tkinter import messagebox
from PIL import ImageTk, Image  
import ast
import sys, os
def resource_path(relative_path):
    """ Get the absolute path to the resource, works for dev and for PyInstaller """
    try:
        # PyInstaller creates a temp folder and stores path in _MEIPASS
        base_path = sys._MEIPASS
    except Exception:
        base_path = os.path.abspath(".")

    return os.path.join(base_path, relative_path)

root = Tk()
root.geometry("950x500+300+150")
root.title("Login")
root.config(bg="#005ae6")
root.resizable(0,0)
    
img = ImageTk.PhotoImage(Image.open(resource_path("a1.jpg")))
l = Label(root, image=img,bg='#005ae6').place(x=0,y=-10)

f  = Frame(root,width=400,height=400,bg="#005ae6")
f.place(x=500,y=40)

sign = Label(f,text='Sign in',fg="white",bg="#005ae6",font=("Microsoft YaHei UI Light",20,"bold")).place(x=150,y=10)
#________________________________________________________________________________________________
#________________________________________________________________________________________________
def on_enter(event):
    signw.delete(0,"end")
    
def on_leave(event):
    name = signw.get()
    if name =="":
        signw.insert(0,"Username ")
    



signw = Entry(f,width=50,fg="white",bg="#005ae6",bd=0,font=("Microsoft YaHei UI Light",11),cursor="xterm",insertbackground="white")
signw.place(x=20,y=70)
signw.insert(0,"Username ")
Frame(f,width=500,height=2,bg='black').place(x=20,y=90)
signw.bind("<FocusIn>",on_enter)
signw.bind("<FocusOut>",on_leave)

#________________________________________________________________________________________________
#________________________________________________________________________________________________

def on_enter(event):
    passw.delete(0,"end")
    
def on_leave(event):
    npass = passw.get()
    if npass =="":
        passw.insert(0,"Password ")
    
    
passw = Entry(f,width=50,fg="white",bg="#005ae6",bd=0,font=("Microsoft YaHei UI Light",11),cursor="xterm",insertbackground="white")
passw.place(x=20,y=120)
passw.insert(0,"Password ")
Frame(f,width=500,height=2,bg='black').place(x=20,y=140)

passw.bind("<FocusIn>",on_enter)
passw.bind("<FocusOut>",on_leave)
#________________________________________________________________________________________________
#________________________________________________________________________________________________
def sign_up():
    
    username = signw.get()
    password = passw.get()
    
    file =open(resource_path("userdatabase.txt"),'r')
    f = file.read()
    r = ast.literal_eval(f)
    file.close()
    
    
    
    
    if(username in r.keys() and password == r[username]):
        toplevel = Toplevel(root)
        toplevel.title("LOGGED-In")
        toplevel.geometry("300x300+400+300")
        toplevel.config(bg="#75e6da")
        Label(toplevel,text=f"Hey {username}",font=("Microsoft YaHei UI Light",20),fg='#05445e',bg="#75e6da").pack(expand=True)

    else:
        messagebox.showerror("Invaild","Invaild username and password")
        
        
        
######!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
def signup_command():
    
    
    window = Toplevel(root)
    window.geometry("950x500+300+150")
    window.title("Sginup")
    window.config(bg="#005ae6")
    window.resizable(0,0)
    def sign_up():
        username= signup.get()
        password = passup.get()
        confrom_password = confup.get()
        if (password == confrom_password):
            try:
                file = open(resource_path("userdatabase.txt"),mode='r+')
                f = file.read()
                r = ast.literal_eval(f)
                dict1 = {username:password}
                r.update(dict1)
                file.truncate(0)
                file.close()
                file = open(resource_path("userdatabase.txt"),mode='w')
                w = file.write(str(r))
                messagebox.showinfo("Signup","Successfully singnup")
            except:
                file = open(resource_path("userdatabase.txt"),mode='w')
                usp = str({username:password})
                file.write(usp)
                file.close
        else:
            messagebox.showerror("Invaild","Both Password and usename should match")
    def sign():
        window.destroy()
    
    nimg = ImageTk.PhotoImage(Image.open(resource_path("a3.jpg")))
    l = Label(window, image=nimg,bg='#005ae6').place(x=-30,y=0)

    f  = Frame(window,width=400,height=400,bg="#005ae6")
    f.place(x=500,y=40)

    signup = Label(f,text='Sign Up',fg="white",bg="#005ae6",font=("Microsoft YaHei UI Light",20,"bold")).place(x=150,y=10)
#________________________________________________________________________________________________
#________________________________________________________________________________________________
    def on_enter(event):
        signup.delete(0,"end")
    def on_leave(event):
        name = signup.get()
        if name =="":
            signup.insert(0,"Username ")
    



    signup = Entry(f,width=50,fg="white",bg="#005ae6",bd=0,font=("Microsoft YaHei UI Light",11),cursor="xterm",insertbackground="white")
    signup.place(x=20,y=70)
    signup.insert(0,"Username ")
    Frame(f,width=500,height=2,bg='black').place(x=20,y=90)
    signup.bind("<FocusIn>",on_enter)
    signup.bind("<FocusOut>",on_leave)

#________________________________________________________________________________________________
#________________________________________________________________________________________________

    def on_enter(event):
        passup.delete(0,"end")
    def on_leave(event):
        npass = passup.get()
        if npass =="":
            passup.insert(0,"Password ")
    
    
    passup = Entry(f,width=50,fg="white",bg="#005ae6",bd=0,font=("Microsoft YaHei UI Light",11),cursor="xterm",insertbackground="white")
    passup.place(x=20,y=120)
    passup.insert(0,"Password ")
    Frame(f,width=500,height=2,bg='black').place(x=20,y=140)

    passup.bind("<FocusIn>",on_enter)
    passup.bind("<FocusOut>",on_leave)
#________________________________________________________________________________________________
#________________________________________________________________________________________________

#________________________________________________________________________________________________
#________________________________________________________________________________________________
    def on_enter(event):
        confup.delete(0,"end")
    
    def on_leave(event):
        nconf = confup.get()
        if nconf =="":
            confup.insert(0,"Conform Password ")
    
    
    confup = Entry(f,width=50,fg="white",bg="#005ae6",bd=0,font=("Microsoft YaHei UI Light",11),cursor="xterm",insertbackground="white")
    confup.place(x=20,y=170)
    confup.insert(0,"Conform Password ")
    Frame(f,width=500,height=2,bg='black').place(x=20,y=190)

    confup.bind("<FocusIn>",on_enter)
    confup.bind("<FocusOut>",on_leave)
#________________________________________________________________________________________________
#________________________________________________________________________________________________
    Button(f,text="Sign Up",font=("Microsoft YaHei UI Light",12),fg="white",bg="#05207A",width=40,height=1,bd=0,command=sign_up).place(x=27,y=230)
    bl = Label(f,text="I have an account",font=("Microsoft YaHei UI Light",11),fg='#ffb600',bg="#005ae6").place(x=90,y=280)
    sign_upb = Button(f,text='Sign in',font=("Microsoft YaHei UI Light",10,),fg="white",bg="#005ae6",bd=0,cursor="hand2",command=sign).place(x=225,y=277)
        
    window.mainloop()


######!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

Button(f,text="Sign in",font=("Microsoft YaHei UI Light",12),fg="white",bg="#05207A",width=40,height=1,bd=0,command=sign_up).place(x=27,y=180)
bl = Label(f,text="Don't have an account?",font=("Microsoft YaHei UI Light",11),fg='#ffb600',bg="#005ae6").place(x=90,y=230)
sign_upb = Button(f,text='Sign up',font=("Microsoft YaHei UI Light",10,),fg="white",bg="#005ae6",bd=0,cursor="hand2",command=signup_command).place(x=265,y=227)


root.mainloop() 