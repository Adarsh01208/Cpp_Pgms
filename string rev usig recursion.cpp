/* #include <bits/stdc++.h>
 using namespace std;
 
  void reverse(string str)
  {
  	if (str.size() == 0)
  	{
  		return ;
	  }
  	reverse(str.substr(1));
  	cout<<str[0];
  }
  
  int main(){
  	
  	string a="coding ninjas";
  	reverse (a);
  	return 0;
  	
    }*/
    
    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
    void rev(string str)
    {
    	if(str.size()==0)
    	{
    		return ;
		}
     rev(str.substr(1));
     
	cout<<str[0];
}	
    int main() {
    	rev("adarsh");
    }
    
