    #include <iostream>
    using namespace std;
    
    class parent  // abstract class
    {                                       // with this abstract class we are ensuring that the object of this parent class never exists
    	public:                      
    	 virtual void show() = 0;            //when we put funtion =0 then it became pure virtual funtion
    	                                      //after making a funtion inside a class of pure virtual funtion then that classbecame abstract class
    		                                  //when a pure vitual funtion exist in the class then it is called abstract class
    			                              //abstract class exists only to act as a parent of  derived classs
	};                                         // when we make pure VF then it doesnot have any  body
	
	class boy  : public parent
	{
		public:
	   void show()
		{
			cout <<"Brown bun"<<endl;
		}
	};
	class girl : public parent
	{
		public:
		void show()
		{
			cout<<"Pink bun"<<endl;
		}
	};
	
	int  main(){
	
   	  	parent *ptr;
	  	ptr = new  boy();
	  	ptr->show();
	  	ptr = new  girl();
       	ptr->show();
		
		return 0;
		
	}
	
	


