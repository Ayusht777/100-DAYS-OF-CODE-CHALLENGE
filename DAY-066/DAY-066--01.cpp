// Day - 66 of 100dayofcode [24/09/2022 Saturday]

#include <iostream>
#include<string> 

//

using namespace std;
int main(){
  
string alphabet{"abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key     {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

string message{};

cout <<"ENTER YOUR MESSSAGE :";
getline(cin,message);
string en_message{};

cout << "Encrpyting the message....."<<endl;

for (auto x :message){

    size_t index = alphabet.find(x);
    if(index!=string::npos){
        char new_c = {key[index]};

        en_message += new_c;
    }

    else{
        en_message+=x;
    }
}
cout << en_message<<endl;
string de_message{};

cout<<"decrypting message "<<endl;

for (auto x :en_message){

    size_t index = key.find(x);
    if(index!=string::npos){
        char new_c = {alphabet[index]};

        de_message += new_c;
    }

    else{
        de_message+=x;
    }
}
cout << de_message<<endl;



}