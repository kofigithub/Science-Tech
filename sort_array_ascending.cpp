// Sorting in ascending order using sort()
// Kofi Owusu-Tufuor.

#include <bits/stdc++.h>
using namespace std;

int main()
{

// declaring int_set array in C
   int int_set[3];
   int i ; // Variable for access int_set array index 
   int temp;
	 
   cout << "read user input into an array and sort the input values in ascending order\n";

   for (i = 0; i < 3; i++) {
      // Reading User Input int_set value Based on index
      cout << "Enter value for position " << i << " : ";
      cin >> int_set[i];
   }
   
   
	int n = sizeof(int_set) / sizeof(int_set[0]);

	/*Here we take two parameters, the beginning of the
	array and the length n up to where we want the array to
	be sorted*/
	sort(int_set, int_set + n);

	cout << "\nArray after sorting "
			"in ascending order is : \n";
	for (int i = 0; i < n; ++i)
		cout << int_set[i] << " ";

	return 0;
}


