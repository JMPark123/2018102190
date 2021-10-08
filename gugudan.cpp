#include <iostream>
using namespace std;

int main(){
    for (int i = 1;i <= 9;i++){ // 9·Î ¼ö Á¤  
        cout << i << "ë‹¨" << endl;
        for (int j = 1;j <= 9;j++){
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
    return 0; 
}
