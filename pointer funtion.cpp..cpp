           #include <iostream>
      using namespace std;
       
       void square(int *ptr);
       
       int main(){
       	
       	int number=10;
       	cout<<"before number is "<<number<<endl;
       	square(&number);
       	cout<<"after "<<number<<endl;
  
       	return 0;
       	
	   }
       
       void square(int *ptr)
       {
       	int temp=*ptr;
       	temp=temp*temp;
       	*ptr=temp;
	   }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
