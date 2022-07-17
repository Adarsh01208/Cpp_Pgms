      #include <iostream>
      using namespace std;
      
      int main(){
      	
      	int number =10;
		int *ptr =0;
		
		ptr=&number;
		cout<<"ptr is :"<<ptr<<endl;
		cout<<"*ptr is :"<<*ptr<<endl;
      	
      	return 0;
	  }
