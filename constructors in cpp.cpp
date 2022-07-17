  /* #include <iostream>
    using namespace std;
    
    class A
    {
    	private:
    	int age;
    	public:
    		void setdata(int x=0)
    		{	age=x;	}
    			int getdata()
    			{
    				return age;
				}
    			
	};
    
    int main() 
	{
    	
      A a_obj;
      a_obj.setdata(28);
      cout<<a_obj.getdata();
    	
	}  */
	//APPLIYING CONSTRUCTORS
	   #include <iostream>
    using namespace std;
    
    class A
    {
    	private:
    	int age;
    	public:
    		A setdata (int x) //CONSTRUCTORS
    		{	age=x;	} //same name as class
    			int getdata()
    			{
    				return age;
				}
    			
	};
    
    int main() 
	{
    	
      A a_obj;
     a_obj.setdata(87);
      cout<<a_obj.getdata();
    	
	}   
 
     
 
    
