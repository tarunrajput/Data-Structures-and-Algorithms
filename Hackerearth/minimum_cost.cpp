#include <iostream> 
using namespace std; 

long long int getFlipWithStartingCharcter(int arr[], int n, int expected,int c01, int c10) { 
	long long int flipCount = 0; 
	for (int i = 0; i < n; i++) { 
		if (arr[i] != expected) 
			flipCount += (arr[i] == 0) ? c01 : c10; 
		expected = (expected == 0) ? 1 : 0;  
	} 
	return flipCount; 
} 

long long int minFlipToMakeStringAlternate(int arr[], int n, int c01, int c10) { 
	return min(getFlipWithStartingCharcter(arr, n, 0, c01, c10), getFlipWithStartingCharcter(arr, n, 1, c01, c10)); 
} 

int main() { 
	int t = 0;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int n = 0, c01 = 0, c10 = 0;
        cin>>n>>c01>>c10;

        int arr[n];
        for(int j = 0; j<n; j++) {
            cin>>arr[j];
        }
        cout << minFlipToMakeStringAlternate(arr, n, c01, c10) << endl;
    }
	return 0; 
} 
