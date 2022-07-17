      #include <iostream>

using namespace std;

class student

{ 

private:

     string name;

      int age;

      int rollno;

      string city;

public:

     //member funtion

  student(string name_a, int age_a, int rollno_a, string city_a) 

{

    name=name_a;

    age=age_a;

    rollno=rollno_a;

    city=city_a;

}

//copy constructors

student ( student &stu)

{  

name=stu.name;

age=stu.age;

rollno=stu.rollno;

city=stu.city;

}

// getter funtion

void  getstudentdata();

};

void student :: getstudentdata()

{

  cout<<"name is :"  <<name<<endl;

cout<<"age is: " <<age<<endl;

cout<<"rollno is : "<<rollno<<endl;

cout<<"city is : " <<city<<endl;

}

int main() {

student stud1 ("null",0,0,"null");

student  stud2 ("adarsh",21,6,"lucknow");

student stud3(stud2);

stud1.getstudentdata();

stud2.getstudentdata();

stud3.getstudentdata();

 return 0;

}


      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
