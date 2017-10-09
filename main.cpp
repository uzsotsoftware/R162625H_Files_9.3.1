/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: trymoren
 *
 * Created on October 7, 2017, 10:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */

class Students{
    string RegNum, FName, SName;
    int Age;

public:
    
    void SetRegNum(string rn){
        RegNum = rn;
    }
    
    void SetFname(string Fnm){
        FName = Fnm;
    }
    
    void SetSname(string Snm){
        SName = Snm;
    }
    
    void SetAge(int thisage){
        Age = thisage;
    }
    
};
int main(int argc, char** argv) {
    Students student;
    string r, f, s;
    int a;
    
    cout<< "Enter Registration Number"<<endl;
    cin>>r;
    student.SetRegNum(r);
    cout<< "Enter First Name"<<endl;
    cin>>f;
    student.SetFname(f);
    cout<< "Enter Surname"<<endl;
    cin>>s;
    student.SetSname(s);
    cout<< "Enter Age"<<endl;
    cin>>a;
    student.SetAge(a);
    
    ofstream StudentsFile("Files\\Students.", ios::binary);
    StudentsFile.write((char*) &student, sizeof (Students));
    if (StudentsFile) cout << "Record saved successfully" << endl;

    return 0;
}