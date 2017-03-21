#include <iostream>

using namespace std;

int main() {
    int n, a, sum = 0;
    cin >> n;
    for(int arr_i = 0; arr_i < n; arr_i++){
        cin >> a;
        sum+=a;
    }
    cout << sum << endl;
    return 0;
}

/**/

#include <iostream>

using namespace std;

int main()
{
            int n;
	int a, sum = 0;
    

       /* or use this
            int a,sum;
            sum = 0;
        */

  
	int arrayname[] = {1, 2, 3, 4, 10, 11};
            n = 6; 
	for (a=0; a<n; a++)
	{
		sum+=arrayname[a];
	}
 
	cout << sum << endl;

	return 0;
}
