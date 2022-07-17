    //recursion programs
    //sum of n natural no using recursion
	
/*	#include <iostream>
	using namespace std;
	
	int sum(int n)
	{
		if(n==0)
		return 0;
		else
		return sum(n-1)+n;	
	}
	
	int main(){
		 int r;
		 r=sum(5);
		 cout<<"sum is "<<r<<endl;	
		return 0;
	} */
	//using loop
	#include <iostream>
	using namespace std;

	int sum(int n)
	{
		int i,s=0;
		for(int i=1;i<=n;i++)
	
			s=s+i;
		return s;
		
	}
	int main(){
		int r;
		r=sum(5);
		cout<<"sum is"<<r<<endl;
		return 0;
	}
	//
	
	
	
	
