#include <iostream>

#include <string>

using namespace std;

struct student {

string fname;

int rollno;

int marks;

};

int main() {

 student tempstu;

cout<<"enter your full name"<<endl;

cin>> tempstu.fname;

cout<<"enter your marks"<<endl;

cin>>tempstu.marks;

cout<<"enter your roll no"<<endl;

cin>>tempstu.rollno;

cout<<"full name : "<< tempstu.fname<<endl;

cout<<"roll no : "<< tempstu.marks<<endl;

cout<<"marks : "<< tempstu.rollno<<endl;

return 0;

}
