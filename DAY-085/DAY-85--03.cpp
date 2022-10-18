#include <iostream>
#include<fstream>
#include<iomanip>


using namespace std;

void print_header(){
    cout<<setw(20)<<left<<"Student"<<setw(25)<<right<<"Score"<<endl;
    cout<<setw(50)<<setfill('-')<<" "<<endl;
    cout<<setfill(' ')<<endl;
    // cout<<setfill('')<<endl;
}

void print_footer(double avg){
    cout<<setprecision(1)<<fixed<<endl;
      cout<<setw(50)<<setfill('-')<<""<<endl; 
      cout<<"Average : "<<avg<<endl;

}

void print_s(const string & student,int score ){
    cout<<setw(20)<<left<<student<<setw(24)<<right<<score<<endl;

}

int proccess(const string &response, const string &anwser){
    int score{0};
    for(size_t i{0};i<anwser.size();i++){
        if(response.at(i) == anwser.at(i) ){
            score++;

        }

    }
    return score;

}


int main(){
    ifstream file;
    string anwser_key{};
    string name{};
    string response{};
    int runnung_sum{0};
    int total_s{0};
    double avg{0.0};

    file.open("data.txt");

    if(!file){
        cerr<<"File Not Open"<<endl;
        exit(1);
    }
    print_header();
    file>>anwser_key;
    while (file>>name>>response)
    { 
        total_s++;
        int score = proccess(response,anwser_key);
        runnung_sum+=score;
        print_s(name,score);


       
    }
    if(total_s!=0){
        avg = static_cast <double>(runnung_sum)/total_s;

    }

    print_footer(avg);
    file.close();
    


   
    
}