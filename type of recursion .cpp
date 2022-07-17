     	 //types of recursion
     	 //tail recursion
     /*  #include <iostream>
     using namespace std;
     
     void fun(int n)
     {
     	while(n>0)
     	{
     		cout<<n;  
     		n--;
		 }
	 }
     
     int main(){
     	int x=3;
     	fun(x);
    	
     	return 0;
 }
 
       #include <iostream>
     using namespace std;
     
     void fun(int n)
     {
     	if(n>0)
     	{
     		cout<<n;
     		fun(n-1); 
     	 
		 }
	 }
     
     int main(){
     	int x=3;
     	fun(x);
    	
     	return 0;
 }
 //tree reecursion
       #include <iostream>
     using namespace std;
     
     void fun(int n)
     {
     	if(n>0)
     	{    cout<<n;
     		fun(n-1); 
     		fun(n-1);
    
		 }
	 }
     
     int main(){
     	int x=3;
     	fun(x);
    	
     	return 0;
 }
 
 	 //nested recursion
       #include <iostream>
     using namespace std;
     
     int fun(int n)
     {
     	if(n>100)
     	return n-10;
     	else
     	return fun(fun(n+11));
    
	 }
     int main(){
     	int x=3;
       int r=fun(x);
     	cout<<r;
    	
     	return 0;
 }*/
 
 	 //indirect recursion
       #include <iostream>
     using namespace std;
     void funB(int n);
     void funA(int n)
     {
     	if(n>0)
     	{
     		cout<<n<<endl;  
     		funB(n-1);
		 }
	 }
	 void funB(int n)
	 {
	 	if (n>1)
	 	{
	 		cout<<n<<endl;
	 		funA(n/2);
		 }
	 }
     
     int main(){
     	int x=20;
     	funA(x);
    	
     	return 0;
 }
