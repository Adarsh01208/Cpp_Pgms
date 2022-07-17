    
    
    #include <iostream>
using namespace std;

// create a Main class and declare main() as member function
class Main {
public:
    int main(int a) {
         cout<<"a = "<<a<<endl;
        return 0;
    }

    int main(int a ,int b) {
        cout<<"a = "<<a<<"; b = "<<b<<endl;
        return 0;
    }
};

int main() {
    Main display;
    display.main(5);
    display.main(5,10);
    return 0;
}
