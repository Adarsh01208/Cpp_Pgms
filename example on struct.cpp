    #include <iostream>
    #include <string>
    using namespace std;
    
    struct phone
    {
    	string name;
    	string processor;
    	int ram;
    	int rom;
    	int camera;
    	double price;
	};
	
	int main(){
		
		phone realme;
		
		realme.name =" realme narzo 30";
		realme.processor="snapdragon 670";
		realme.ram = 3;
		realme.rom = 32;
		realme.camera = 48;
		realme.price =12999;
	
		cout<<"name :"<< realme.name<<endl;
		cout<<"processor :"<< realme.processor<<endl;
		cout<<"ram :"<< realme.ram<<endl;
		cout<<"rom :"<< realme.rom<<endl;
		cout<<"camera :"<< realme.camera<<endl;
		cout<<"price :"<< realme.price<<endl;
			return 0;
	}
	// structure using another variable 
	
         #include <iostream>
          #include <bits/stdc++.h>
    #include <string>
    using namespace std;
    
    struct phone
    {
    	string name;
    	string processor;
    	int ram;
    	int rom;
    	int camera;
    	double price;
	};

	int main(){
		
	phone realme ,samsung; 
	realme = {"realme narzo","snapdragon",3,32,48,12999} ;
    samsung=realme;

		cout<<"name :"<< realme.name<<endl;
		cout<<"processor :"<< realme.processor<<endl;
		cout<<"ram :"<< realme.ram<<endl;
		cout<<"rom :"<< realme.rom<<endl;
		cout<<"camera :"<< realme.camera<<endl;
		cout<<"price :"<< realme.price<<endl;
		
		cout<<"name :"<< samsung.name<<endl;
		cout<<"processor :"<< samsung.processor<<endl;
		cout<<"ram :"<< samsung.ram<<endl;
		cout<<"rom :"<< samsung.rom<<endl;
		cout<<"camera :"<< samsung.camera<<endl;
		cout<<"price :"<< samsung.price<<endl;
		
		return 0;
	}
