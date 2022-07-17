     //power using recursion
/*	   #include <iostream>
     using namespace std;
     int pow(int m,int n)
     {
     	if (n==0)
     	return 1;
     	else
     	return pow(m,n-1)*m;
	 }
     int main(){
     	
     	int r;
     	r=pow(4,2);	
     	cout<<"power is"<<r<<endl;
     	return 0;
	 }*/
	 
	 //nCr using recursion
	  #include <iostream>
     using namespace std;
     int NCR(int n,int r)
     {
     	if (r==0||n==r)
     	return 1;
     	else
     	return NCR(n-1,r-1)+NCR(n-1,r);
	 }
     int main(){
     	
     	int r;
     	r=NCR(4,2);	
     	cout<<"ncr is "<<r<<endl;
     	return 0;
	 }
