#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter the size of the matrix.\n\n";
	int n;
	cin>>n;
	int a[n][n], primaryDiagSum = 0, secondaryDiagSum = 0;
	cout<<"Enter the elements of the matrix.\n\n";
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cin>>a[i][j];
	    }
	}
	cout<<"The elements of primary diagonal are :-\n";
	for (int i = 0; i < n; i++) {
	    cout<<a[i][i]<<" ";
	    primaryDiagSum = primaryDiagSum + a[i][i];
	}
	cout<<"\nThe sum of all elements of primary diagonal is :- "<<primaryDiagSum<<"\n";
	cout<<"\nThe elements of secondary diagonal are :-\n";
	for (int i = 0; i < n; i++) {
	    cout<<a[i][n - i - 1]<<" ";
	    secondaryDiagSum = secondaryDiagSum + a[i][n - i - 1];
	}
	cout<<"\nThe sum of all elements of secondary diagonal is :- "<<secondaryDiagSum<<"\n";
	int ans = primaryDiagSum + secondaryDiagSum;
	cout<<"\nTherefore, the sum of primary diagonal and secondary diagonal is :- "<<ans<<"\n";
	return 0;
}