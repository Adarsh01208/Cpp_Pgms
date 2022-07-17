     #include <iostream>
     using namespace std;
      template<class t>
      t sum( t x,t y)  //tempelate funtion
      {
       return x+y;
	  }
        int main(){
     	
     	cout<<sum<int>(2,5)<<endl;
     	cout<<sum<float>(2.4,3.5)<<endl;
     	cout<<sum<string>("adarsh","singh")<<endl;
     	
     	
     	return 0;
	 }
     
