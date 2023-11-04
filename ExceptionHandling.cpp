#include <iostream>
using namespace std;

class exceptions{
    public:
        int a, b;
        void getdata(){
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
        }
        void divide(){
            int c;
            try{
                if(b==0){
                    throw b;

                }

            }
        }
};
}