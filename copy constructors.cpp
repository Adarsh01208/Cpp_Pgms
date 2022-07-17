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
	//	parametrized constructors
	        person (string name_a,int age_a,float height_a)
	        {
	        	name=name_a; 
    			age=age_a;
    			height=height_a;
	        	
			}
		//copy constructors	
			person(person &obj2)
			{
				
				name=obj2.name; 
    			age=obj2.age;
    			height=obj2.height;
	        	
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
    	
      person obj,obj2("adarsh",21,6.0), obj3(obj2);
      obj.getdata();
      obj2.getdata();
      obj3.getdata();
      return 0;
 }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
     	
