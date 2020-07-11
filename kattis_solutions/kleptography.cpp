#include <iostream>
using namespace std;

string decipher(string a ,string b,int m,int n){
    int i=m-1;
    int size=n-1;
    for (i; i > size; i--) {
        a[i - n] = 'a' + (26 + b[i] - a[i]) % 26;
    }
    return a;
}

int main() {
    int n, m;
    string a,b;
    cin >> n >> m;
    cin >> a >> b;
    string temp="";
    for(int i=0;i<m-n;i++){
        temp+=' ';
    }
    a=temp+a;
    a=decipher(a,b,m,n);
    cout << a << endl;
    return 0;
}