      
      #include <iostream>
      using namespace std;
      
      class add{
      	public:
      		
      		int sum (int num1,int num2){
      			
      			return num1+num2;
			  }
			  
			  int sum(int num1,int num2,int num3){
			  	
			  	return num1+num2+num3;
			  }
			  
		};
      	
      	
      	int main(){
		  
      	add ad;
      	cout<<"output of 1 is :"<<ad.sum(20,90)<<endl;
      	cout<<"output of 2 is :"<<ad.sum(30,50,60)<<endl;
      	
      }
     
  
  
  
  
  
  
  
  
  
  
  
