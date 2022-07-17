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
    		person() //(string name_a, int age_a,float height_a)
    		{
    	//	name=name_a; //constructors
    	//	age=age_a;
    	//	height=height_a;
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
     // 
       // appliyig constructors
   /* #include <iostream>
    using namespace std;
    
    class A
    {
    	private:
    	float height;
    	int age;
    	public:
    		A () //CONSTRUCTORS
    		{
    			
    		cout<<"default constructors called"<<endl;
			//	age=x;
				}  //same name as class and & don't return
    			void getdata()
    			{
    					cout<<"height is :"<<height<<endl;
    					cout<<"age  is :"<<age<<endl;
				}
    			
	};
    
    int main() 
	{
    	
      
      A obj ,obj2;
      
    obj.getdata();

      return 0;
}
    */
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
