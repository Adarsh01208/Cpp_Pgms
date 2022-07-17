           #include <iostream>
      using namespace std;
      const int MAX=5;
       void printArray(int *ptr);
       
       int main(){
       	
       	int arr[MAX]={10,20,30,40,50};
        printArray(arr);//(&arr[0]);
    
      	return 0;
	   }
     
     void printArray(int *ptr)
     {
     	
     	for(int i=0;i<MAX;i++)
     	cout<<*ptr++<<endl;
	 }   
