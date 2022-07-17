     #include <iostream>
     using namespace std;
     
     
     class base
     {
       public:
       	base( )
       	{
       		cout<<"defaul constructors of base class"<<endl;
		   }
		   base(int b)
		{
		    cout<<"para constructors of base class"<<endl;
         	}
	 };
	  
	  class derived:public base
	  {
	  	
	  	
	  };
     
     int main(){
     	 
     	 derived d1;
     	 
     	
     	return 0;
	 }
