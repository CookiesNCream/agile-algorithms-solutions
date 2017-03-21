#include <iostream>

using namespace std;

int main() {
    int n, space, symbol = 1, s;
    cin >> n;
    s = n-1;
    for(int i = 0; i < n; i++){
     space = s;
     for(int j = 0; j < space; j++)cout << " ";
     for(int l = 0; l < symbol; l++)cout << "#";
     cout << endl;
     s--;
     symbol++;
    }
    return 0;
}
