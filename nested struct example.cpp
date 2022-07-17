         #include <iostream>
    #include <string>
    using namespace std;
    
    struct camera
    {
    	int front;
    	int back;
	};
    
    struct phone
    {
    	string name;
    	string processor;
    	int ram;
    	int rom;
    	camera camera;
    	double price;
	};
	
	int main(){
		
		phone realme;
		
		realme.name =" realme narzo 30";
		realme.processor="snapdragon 670";
		realme.ram = 3;
		realme.rom = 32;
		realme.camera.back = 48;
		realme.camera.front = 16;
		realme.price =12999;
		
	
		cout<<"name :"<< realme.name<<endl;
		cout<<"processor :"<< realme.processor<<endl;
		cout<<"ram :"<< realme.ram<<endl;
		cout<<"rom :"<< realme.rom<<endl;
		cout<<"camera back :"<< realme.camera.back<<endl;
		cout<<"camera front :"<< realme.camera.front<<endl;
		cout<<"price :"<< realme.price<<endl;
		
		
		
		return 0;
	}
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
