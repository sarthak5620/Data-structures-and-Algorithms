#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int first = -1;
	    
	    int a[N];
	    int i;
	    
	    for(i = 0; i < N; i++)
	    {
	        cin >> a[i];
	    }
	    for(i = 0; i < N; i++)
	    {
	        if(a[i] == 1)
	        {
	            first = 1;
	            break;
	        }
	    }
	    if(first == 1){
	        cout << i << "\n";
	    } else{
	        cout << first << "\n";
	    }
	}
	return 0;
}