              #include <iostream>
      using namespace std;
       
       class person
       {
       	private:
       		int age;
       		string name;
       	
       	public:
       		person(int age,string name)
       		{
       		  this->age=age;
				this->name=name;
			   }
			   void printvalue()
			   {
			   	cout<<"age is"<<age<<endl;
			   	cout<<"name is "<<name<<endl;
			   }
		};
       
       
       int main(){
       	
        person a(25,"adarsh");
        a.printvalue();
       	return 0;
	   }
