#include <iostream>
using namespace std;

class stack{
	
	int top;
	public:
		int a[10];
		stack(){
			
			top=-1;
		}
	
	
	void push(int x);
	int pop();
	void isEmpty();
};
void stack::push(int x) {
	if(top>=10){
		cout<<"stck is over flow"<<endl;
	}
	else{
		a[++top]=x;
		cout<<"element inserted"<<endl;
	}
}
     int stack::pop(){
	if(top<0){
		cout<<"stack underflow"<<endl;
		return 0;
	}
	else{
		int d=a[top--];
		return d;
		
	}
}


void stack::isEmpty(){
		if(top<0){
		cout<<"stack is empty"<<endl;
}
else{
		
		cout<<"stack is not empty"<<endl;
}
	
}
int main(){

stack s1;
s1.push(10);
s1.push(100);

}





























