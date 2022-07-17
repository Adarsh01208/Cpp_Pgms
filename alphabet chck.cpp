#include <iostream>

using namespace std;

int main ()

{

char ch;

cout<<"enter the character of lowercase or uppercase"<<endl;

cin>>ch;

 if(ch>='A' && ch<='Z'){

cout<<ch<< "  is a upper case alphabet"<<endl;

}

else if(ch>='a' && ch<='z')

{

cout<<ch<<  "  is a lower case alphabet"<<endl;

}

else

{

cout<<ch<<"it is not a alphabet"<<endl;

}

return 0;

}


