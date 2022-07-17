     #include <iostream>
     using namespace std;
     //creating class
     class mobile
     {
     	private:
     		//memeber variable
     		string name;
     		int ram;
     		string processor;
     		int battery;
     		
     	public:
     		//member funtion 
     		//parametrized constructors
		    mobile (string name_a,int ram_a,string processor_a,int battery_a)	
		    {
		    	name=name_a;
		    	ram=ram_a;
		    	processor=processor_a;
		    	battery=battery_a;
		    
		   	}
     		//copy constructors
     		mobile(mobile &mob)
     		{
     	    	name=mob.name;
		    	ram=mob.ram;
		    	processor=mob.processor;
		    	battery=mob.battery;
		    
         	}
         	//creating getter funtion
         	void getmobiledata();
			 
	 };
	 //creating body of getter funtion outside the class
	 void mobile::getmobiledata()
	 {
	 	cout<<endl<<"name is "<<name<<endl;
	 	cout<<endl<<"ram is "<<ram<<endl;
	 	cout<<endl<<"processor is "<<processor<<endl;
	 	cout<<endl<<"battery is "<<battery<<endl;
	 }
     
     int main(){
     	
     	mobile doko  ("null",0,"null",0);
     	
     	 mobile doko2("realme",4,"snapdragon",5000);
     	 mobile doko3(doko2);
     	
     	doko.getmobiledata();
     	doko2.getmobiledata();
     	doko3.getmobiledata();
     	
     	
     	return 0;
	 }
     
     
     
     
     
     
     
     
     
     
     
