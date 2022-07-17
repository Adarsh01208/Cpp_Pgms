#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0 && x+0.5<=y)
	{
	    y -= x+0.5;
	}
	cout.precision(2);
	cout<<fixed<<y;
	return 0;
	

