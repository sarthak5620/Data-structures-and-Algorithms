#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int x;
	    cin >> x;
	    
	    int start = -1, end;
	    
	    int a[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	        
	        if(a[i] == x)
	        {
	            if(a[i-1] != x)
	            {
	                start = i;
	            }
    	        end = i;
	        }
	    }
	    if(start == -1){
	        cout << start << "\n";
	    } else{
	        cout << start << " " << end << "\n";
	    }
	}
	return 0;
}