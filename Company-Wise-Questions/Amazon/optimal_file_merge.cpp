#include<bits/stdc++.h> 
using namespace std; 

int minComputation(int files[], int size) 
{	
    sort(files, files + size);
    priority_queue<int, vector<int>, greater<int>> pq; 

	for(int i = 0; i < size; i++) 
	{ 
		pq.push(files[i]); 
	} 
	int count = 0; 
	while(pq.size() > 1) 
	{ 
		int first_smallest = pq.top(); 
		pq.pop(); 
		int second_smallest = pq.top(); 
		pq.pop(); 
		int temp = first_smallest + second_smallest; 
		count += temp; 
		pq.push(temp); 
	} 
	return count; 
} 
int main() 
{
	int files[] = {4, 8, 6, 12}; 
    int size = sizeof(files)/sizeof(files[0]);
	cout <<minComputation(files, size); 
	return 0; 
} 

