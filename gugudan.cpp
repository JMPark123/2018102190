#include <iostream>
using namespace std;

int main(){
    for (int i = 1;i <= 9;i++){
        // changed nine-by-nine
        cout << i << "단" << endl;
        for (int j = 1;j <= 9;j++){
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
    return 0;
}