#include <bits/stdc++.h>
using namespace std;
void print_even_nums(int current, int x) {
    if (current > x) return;
    cout<<current<<" ";
    print_even_nums(current + 2, x);
}
int main() {
    cout<<"Enter the desired number upto which you want to find even numbers.\n\n";
	int x;
	cin>>x;
	cout<<"All even numbers from 0 to "<<x<<" are :- \n";
	print_even_nums(0, x);
	return 0;
}
