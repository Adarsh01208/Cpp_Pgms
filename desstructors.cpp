              #include <iostream>
      using namespace std;
       
       class test
       {
       	private:
       		int *age=0;
       	
		   	public:
       	    	test()
       	    	{  
       	    	    age=new int();
				    *age=0;
       		    	cout<<"NP-constructors"<<endl;
			   }
			   test( int x)
       	    	{  
       	    	    age=new int();
				    *age=x;
       		    	cout<<"P-constructors"<<endl;
			   }
			   
			   
			~test()
			{     
			    
				cout<<"destructors"<<endl;
			}
	   };
       
       
       int main(){
       	
       	
         test obj1;
       	test obj2(10);
       	
       	return 0;
	   }
