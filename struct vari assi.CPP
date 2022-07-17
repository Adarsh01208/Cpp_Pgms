
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
		
		phone realme ;
		
		realme ={"realme narzo","snapdragon",3,32,48,12999} ;
		

	/*	realme.name =" realme narzo 30";
		realme.processor="snapdragon 670";
		realme.ram = 3;
		realme.rom = 32;
		realme.camera = 48;
		realme.price =12999;*/
		
	
		cout<<"name :"<< realme.name<<endl;
		cout<<"processor :"<< realme.processor<<endl;
		cout<<"ram :"<< realme.ram<<endl;
		cout<<"rom :"<< realme.rom<<endl;
		cout<<"camera :"<< realme.camera<<endl;
		cout<<"price :"<< realme.price<<endl;
		
	
		
		
		return 0;
	}
