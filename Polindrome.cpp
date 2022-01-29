#include <iostream>

using namespace std;

int main() {
    int jumlah;
    char kata[jumlah];
    
    cout<<"Masukkan Jumlah Huruf : ";
    cin>>jumlah;
    cout<<endl;
    
    for(int i = 1; i <= jumlah; i++){
        cout<<"Masukkan Huruf Ke-"<<i<<" : ";
        cin>>kata[i];
    }
    
    cout<<endl;
    cout<<"Kata Palindromenya adalah : ";
    for(int j = 1; j <= jumlah; j++){
        cout<<kata[j];
    }
    jumlah = jumlah - 1;
    while(jumlah > 0){
        cout<<kata[jumlah];
        jumlah = jumlah - 1;
    }

    return 0;
}