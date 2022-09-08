from tkinter import *
from PIL import ImageTk, Image

root = Tk()
root.geometry("950x500+300+150")
root.title("Login")
root.config(bg="#005ae6")
root.resizable(0,0)
    
img = ImageTk.PhotoImage(Image.open("a1.jpg"))
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
    if(username == "ayush" and password == "1234"):
        toplevel = Toplevel(root)
        toplevel.title("LOGGED-In")
        toplevel.geometry("300x300+400+300")
        toplevel.config(bg="#75e6da")
        Label(toplevel,text=f"Hey {username}",font=("Microsoft YaHei UI Light",20),fg='#05445e',bg="#75e6da").pack(expand=True)



Button(f,text="Sign in",font=("Microsoft YaHei UI Light",12),fg="white",bg="#05207A",width=40,height=1,bd=0,command=sign_up).place(x=27,y=180)
bl = Label(f,text="Don't have an account?",font=("Microsoft YaHei UI Light",11),fg='#ffb600',bg="#005ae6").place(x=90,y=230)
sign_upb = Button(f,text='Sign up',font=("Microsoft YaHei UI Light",10,),fg="white",bg="#005ae6",bd=0,cursor="hand2").place(x=265,y=227)


root.mainloop() 