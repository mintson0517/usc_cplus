#include <iostream>

using namespace std;

int main(){
    int a, b;
    if(cin >> a){
      if(cin >> b){
          cout << "There are exactly 2 integers: " << a << " and " << b << " read by scanf() function." << endl;
      }else{
          cout << "There is only one integer with value " << a << " read by scanf() function." << endl;
      }
    }else{
        cout << "The return value of scanf() function is -1 which indicates no integer found." << endl;
    }
    return 0;
}