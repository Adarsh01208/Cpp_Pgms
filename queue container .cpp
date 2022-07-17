       #include <iostream>
   #include <queue>
   
   using namespace std;
   
   int main(){
   	
   	//decleration
   	queue<int> queue1;
   	//push value 10,20,30(t)
   	queue1.push(10);
   	queue1.push(20);
   	queue1.push(30);
   	
   	//top
   	cout<<"front element:-"<<queue1.front()<<endl;
   	cout<<"back element:-"<<queue1.back()<<endl;
   	
   	
     //pop
     queue1.pop();
	   cout<<"new front element:-" <<queue1.front()<<endl;
	   
	   //size : no of element present in the queue	  
	cout<<"no of element:-"<<queue1.size()<<endl;
   	return 0;
   }
