#include <iostream>

using namespace std;

int main() {
    int n;
    float a, pos = 0, neg = 0, zero = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > 0)pos++;
        else if(a < 0)neg++;
        else if(a == 0)zero++; 
    }
    printf("%.6f\n",pos/n);
    printf("%.6f\n",neg/n);
    printf("%.6f\n",zero/n);

    return 0;
}
