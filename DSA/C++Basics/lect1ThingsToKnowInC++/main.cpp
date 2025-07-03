#include<iostream>
#include<istream>
#include<ostream>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if(marks >=90){
            cout<<"Your Grade is A   ";
            cout<<"marks are greater or equal to 90";
        }
        else if(marks<90 && marks>70){
            cout<<"Your Grade is B";
        }
        else if(marks<=70 && marks>50){
            cout<<"Your Grade is C";
        }
        else if(marks<=50 && marks>35){
            cout<<"Your Grade is D";
        }
        else{
            cout<<"You are fail  "<<ends;
            cout<<"marks are less than 35";
        }
    }
};

int main(){
    Solution solution;

    // task 1: get number from user and print it
    int variable_name;
    cin>>variable_name;
    cout<<"Heyyy"<<variable_name<<endl;

    // task 2: take input as age and tell marks accordingly
    int marks;
    cin>>marks;
    solution.studentGrade(marks);
    //task3: for loop
    for(int i = 0;i<=5;i+=2){
        cout<<i<<endl;
        // age i ko loop k andr initialize kre ge to ise loop k baad use nhi kr skte or na hi iski value ko print krwa skte hain isi liye kabhi kabhi ise loop k bahir initiailze kr ke loop k andr use krte hain or phir iski value ko loop complete krne k baad print bhi krwa skte hain
        
    }
    
}