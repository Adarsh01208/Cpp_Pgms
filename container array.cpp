    #include <iostream>
     #include <bits/stdc++.h>
    #include <array>   //include array header
    using namespace std;
    
    
    int main(){
    	//array decleration
      std::array<int,3> testArray1;
    	//array intialization
      std::array<int,3> testArray2 ={10,20,30};
    	
        //methods
        
    	cout<<"at"<<testArray2.at(2)<<endl;   //out of bond safe
    	cout<<"[]"<<testArray[2]<<endl;       //unsafe
    	cout<<"front()"<<testArray2.front()<<endl;      //return 1st element
    	cout<<"back()"<<testArray2.back()<<endl;       //return last element
		
		testArray1.fill(0);
		testArray1.swap(testArray2);           //swaparray
		testArray1.empty();
		cout<<"size()"<<testArray2.size()<<endl;     //size of array
		cout<<"max_size"<<testArray2.max_size()<<endl;    	 //max size of array
    	return 0;
	}
    
    
