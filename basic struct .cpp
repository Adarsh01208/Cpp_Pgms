     #include <iostream>
     #include <string>
     using namespace std;
     
     struct person
     {
     	string name;
     	int  age;
     	float weight;
     	float height;
     	double salary;
	 };
     
     
     
     int main(){
     	
     	person pvar;
     	
		pvar.name= "adarsh";
     	pvar.age=34;
     	pvar.height=5.5;
     	pvar.weight=64.8;
     	pvar.salary=40000;
     	
     	//acess data
     	
     	//pvar.salary=900000;
     	
     	//pvar.name="chotu";
     	
     	cout<<endl<<" name : "<< pvar.name;
     	cout<<endl<<" salary :"<< pvar.salary;
     	cout<<endl<<" age :"<< pvar.age;
     	cout<<endl<<" height : "<< pvar.height;
     	
     	return 0;
	 }
