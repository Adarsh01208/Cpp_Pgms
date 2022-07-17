    #include <iostream>
    #include <string>
    using namespace std;
    
    template<class t>
    class sum
    {
     private:
     	t x;
     	t y;
     public:
	    sum(t arg1,t arg2)	
	    {
	    	x=arg1;
	    	y=arg2;
		}
		 
		 void getdata()
		 {
		 	cout<<x+y<<endl;
		 }
	};
    
    int main(){
    	
    	sum <int> obj1(2,3);
    	sum <float>obj2(2.4,4.5);
    	sum<string>obj3("adarsh","singh");
    	
    	obj1.getdata();
    	obj2.getdata();
		obj3.getdata();    	
    	return 0;
	}
