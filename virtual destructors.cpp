      #include <iostream>
      using namespace std;
      
      class base
      {
      	public:
      	virtual	~base () //base funtion
      		{
      			cout<<"base class destructors"<<endl;
      			
			  }
	  };
	  
	  class derived : public base
	  {
	  	public:
	  		~derived() //derived funtion
	  		{
	  			cout<<"derived class destructors"<<endl;
			  }
	  };
	  
	  int main(){
	  	
	  	base *ptr =new derived; //creating base class pointer object
	  	
	  	delete ptr;       // here pointer object is called to delete
	  }
