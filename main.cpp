#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    int n= (int)c;

    if (caratteri(n)==1){
        if ((65 <= n)&&(n <= 90)){
            n=n+32;
            cout << (char)n << endl;
        } else if ((97 <= n)&&(n <= 122)){
            n=n-32;
            cout << (char)n << endl;
        }
    } else {
        cout << "errore" << endl;
    }

    return 0;
}
