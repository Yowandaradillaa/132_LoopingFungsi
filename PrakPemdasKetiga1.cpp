#include <iostream>
using namespace std;

int main(){
    int i;

    for (i = 0; i < 6; i++) {
        cout << i << ". " << "Nama saya adalah Yowanda" << endl;
    }

    string arr[5];
    for (i = 0; i < 5; i++){
        cout << "Masukan Nickname ke " << i + 1 << "=";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++){
        cout << "Namanya adalah= " << arr[i] <<endl;
    }

    

    return 0;
}
