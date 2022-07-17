     //sum of arrray using funtion
/*   #include <iostream>
     using namespace std;
      void sumofarray(int arr[],int n){
      	
      	int sum=0,s=1;
	  for( int i=0;i<n;i++)
      {
      	sum=sum+arr[i];
	  }
	  cout<<"sum of array is"<<sum<<endl;
      for(int i=0;i<n;i++)
	  {
    	s*=arr[i];
	  }
	  cout<<"product of their element is "<<s<<endl;
      }
    
      int main()  {
	  
	  int arr[100], i,n;
      cout<<"enter the size of array"<<endl;
      cin>>n;
      cout<<"enter the array elements"<<endl;
      for(int i=0;i<n;i++)
	  {
      cin>>arr[i];
      }
      sumofarray(arr,n);
      }*/
      
      
      //sumof array taking input
    /*  #include<iostream>
      using namespace std;
      
      int main(){
      	
      	int arr[10],i=0,n,sum=0;
      	cout<<"enter the size of the array"<<endl;
      	cin>>n;
      	cout<<"enter the array elemrnts"<<endl;
      	for(i=0;i<n;i++)
    	cin>>arr[i];
      	for(i=0;i<n;i++)
      	{
      	 sum=sum+arr[i];
     	}
      	cout<<"sum of array element is:"<<sum<<endl;
      	
      	return 0;
	  }*/
        
        //sum of array
        
          #include<iostream>
      using namespace std;
      
      int main(){
      	int i, sum=0;
      	int arr[5]={2,4,6,8,10};
      	for(int i=0;i<5;i++)
      	{
      	sum+=arr[i];
     	}
      	cout<<"sum of array element is:"<<sum<<endl;
      	
      	return 0;
	  }
      

      	
