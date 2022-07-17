#include <iostream>
using namespace std;

class param
{
    private:
	int a,b;
	public:
		param(int a1,int b1)
	{
		a=a1;
		b=b1;
	}
	  int geta()
	  {
	  	return a;
	  }
	  int getb()
      {
      	return b;
	  }
};
	   
	  

   int main(){
   	  
   	  param d1(20,30);
   	  cout<<"value of a = "<<d1.geta()<<endl;
   	  cout<<"value of b = "<<d1.getb()<<endl;
   	return 0;
   	
   }
