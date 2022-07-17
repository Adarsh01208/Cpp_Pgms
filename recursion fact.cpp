     #include <iostream>
     using namespace std;
     
     int factorial(int n){
     	
     	if (n>1){
     		
     		return n*factorial(n-1);
		 }
		 else{
		 	return 1;
		 }
	 }
     
     
     int main()  {
     	
     	int n , result;
     	cout<<"enter the integer "<<endl;
     	cin>>n;
     	
     	result=factorial(n);
     	cout<<"factorial of given integer"<< n <<" is :"<< result <<endl;
     	
     	return 0;
     }
     	
     
		 
		 
		 
     	
     	
	 
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
