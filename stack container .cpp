   #include <iostream>
   #include <stack>
   
   using namespace std;
   
   int main(){
   	
   	//decleration
   	stack<int> stack1;
   	//push value 10,20,30(t)
   	stack1.push(10);
   	stack1.push(20);
   	stack1.push(30);
   	
   	//top
   	cout<<"top element:-"<<stack1.top();
   	
     //pop
     stack1.pop();
	   cout<<"new top:-" <<stack1.top();
	   
	   //size : no of element present in the stack	  
	cout<<"no of element:-"<<stack1.size();
   	return 0;
   }
