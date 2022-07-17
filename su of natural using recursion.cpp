     #include <iostream>
     using namespace std;
      int add(int n){
      	if (n!=0)
      	return n + add(n-1);
      	cout <<"enter the no ofsum"<<endl;
      	return 1;
      	
	  }
	  
	  int main(){
	  	int i,result;
	
	  	cout <<"enter the no ofsum"<<endl;
	  	cin>>i;
	  	result=add(i);
	  	cout<<"sum of the total n is:"<<result<<endl;s
	  	
	  }
