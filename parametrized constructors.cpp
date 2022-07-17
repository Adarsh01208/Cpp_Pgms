     	      #include <iostream>
    using namespace std;
    
    class person
    {
    	private:
    		string name;
    		int age;
    		float height;
    	public:
    	
    		person()
    		{
    			name="adarsh"; //constructors
    			age=0;
    			height=0.4;
    			
			}
			//parametrized constructors means assigining value of your own
	        person (string name_a,int age_a,float height_a)
	        {
	        	name=name_a; 
    			age=age_a;
    			height=height_a;
	        	
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
    	
      person obj,obj2("chotu",21,6.0);
      obj.getdata();
      obj2.getdata();
      return 0;
 }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
