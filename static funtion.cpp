      #include <iostream>
      using namespace std;
      
      class alpha 
      {
      	private:
      		int a;
      		int b;
      	
      	public:
      		alpha ()
      		{
      			a=5;
      			b=5;
      			stat++;
			  }
			  
			static int stat;
			static int getstat(){
				
			
			stat++;
			return stat;
		}
	  };
	     
	     int alpha::stat=0;
      
      int main(){
      	
      	
      	alpha a1;
      //	alpha a2;
      	
      	
      	cout<<"value using a1 object is:"<<a1.getstat()<<endl;
     // 	cout<<"value using a2 object is:"<<a2.stat<<endl;
      	cout<<"value using class name is"<<alpha::stat<<endl;
      	
      	
      	
      	
      	return 0;
	  }
