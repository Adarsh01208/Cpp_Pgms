#include <iostream>
using namespace std;

class Hello_world
{
	public:
    Hello_world()  //contructors
		{
		cout<<"contructors is called"<<endl;
		}
   ~Hello_world()
   {
   	cout<<"destructors is called"<<endl;
   }
   void display()
   {
   	cout<<"hello wordl"<<endl;
   }
};


   int main(){
   	   Hello_world obj;
   	   obj.display();

   	return 0;
   	
   }
