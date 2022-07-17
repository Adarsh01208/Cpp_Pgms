   //to display to number
     #include <iostream>
     using namespace std;
     
     class point
	 {
     	int x,y;
     	
     	public:
     		point (int x1,int y1)
     		{
     			x=x1;
     			y=y1;
			 }
			 point(const point &p2)   //copy constructors
			 {
			 	x=p2.x;
			 	y=p2.y;
			 }
			 int getx()
			 {
			 	return x;
			 }
			 int gety()
			 {
			 	return y;
			 }
     };
     
     
     int main (){
     	
     	point p1(10,20); //normal constructors 
     	point p2=p1;   //copy constructors
     	
     	cout<<"value ofp1.x:-"<<p1.getx()<<endl;
     	cout<<"value ofp2.x:-"<<p2.gety()<<endl;
    	cout<<"value ofp1.y:-"<<p1.getx()<<endl;
     	cout<<"value ofp2.y:-"<<p2.gety()<<endl;
     	
		 return 0;
	 }
