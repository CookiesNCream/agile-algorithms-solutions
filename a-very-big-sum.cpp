#include <iostream>

using namespace std;

int main() {
    int n;
    long int a, sum = 0;
    cin >> n;
    for(int arr_i = 0;arr_i < n;arr_i++){
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
	long int a, sum = 0;
    

       /* or use this
            int a,sum;
            sum = 0;
        */

  
	int arrayname[] = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
            n = 5; 
	for (a=0; a<n; a++)
	{
		sum+=arrayname[a];
	}
 
	cout << sum << endl;

	return 0;
}
