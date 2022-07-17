      #include <iostream>
    using namespace std;
    
    class person
    {
    	private:
    		string name;
    		int age;
    		float height;
    	public:
    		
    		//creating constructors of their own
	//if unot itialiiize constructors compiler gives default constructors with unknow garbage value in order to allocate memory to the data membe
    		person()
    		{
    		//	name="adarsh"; //constructors
    	//		age=0;
    	///		height=0.4;
			}
	
    		void getdata()
    		{
    			cout<<endl<<"name : "<<name;
    			cout<<endl<<"age :"<<age;
    			cout<<endl<<"height : "<<height;
			}
	};
    
    int main() 
	{
    	
      person obj;
      obj.getdata();
      return 0;
 }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
