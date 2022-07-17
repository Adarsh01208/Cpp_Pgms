#include <iostream>
using namespace std;

class demo
{
    private:
	int num1,num2;
	public:
		demo ()
		{
			num1=10;
			num2=20;
		}
		void display()
		{
			cout<<"num1 = "<<num1<<endl;
			cout<<"num2 = "<<num2<<endl;
		}
};


   int main(){
   	  
   	  demo d1;
   	  d1.display();

   	return 0;
   	
   }
