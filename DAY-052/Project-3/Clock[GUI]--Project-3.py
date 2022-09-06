from tkinter import *
import time

root = Tk()
root.geometry("500x200")
root.title("Clock")
root.resizable(0,0)

# root.iconbitmap("Graphicloads-100-Flat-Clock.ico")



l = Label(root,font=("Boulder", 70, 'bold'),bg="yellow",fg='white',bd=70)
l.grid(row=0,column=1)


def timec():
    st = time.strftime("%H:%M:%S")
    l.config(text=st)
    l.after(1000,timec)
    
    


timec()




root.mainloop()