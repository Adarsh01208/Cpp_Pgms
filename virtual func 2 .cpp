         #include <iostream>
    using namespace std;
    
    class base
    {
    	public:
    	 virtual void show()
    		{
    			cout <<"base class"<<endl;
			}
	};
	
	class drv1 : public base
	{
		public:
	  virtual void show()
		{
			cout <<"derived class"<<endl;
		}
	};
	class drv2 : public base
	{
		public:
		void show()
		{
			cout<<"derived class 2"<<endl;
		}
	};
	
	int  main() {
		
		
      drv1 b1;
	  drv2 b2;
	  base *ptr=NULL; //pointr of base class
	  
	  ptr=&b1;
	  ptr->show();  
	   ptr=&b2;
	  ptr->show();
	                       	/*	base *ptr;
	                    	ptr = new  drv1();
	                         	ptr->show();
	                          	ptr = new  drv2();
                        		ptr->show();*/
		
		

		
		return 0;
		
	}
	
	


