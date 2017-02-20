#include <iostream>
using namespace std;
#define size 1000

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main() {

	int num;
	int total;
	for (num = 1; num <= size; num++)

		while (num % 3 == 0 || num % 5 == 0 && num != size) {

			cout << num << endl;
			total = num + total;			
			num++;

		}
	cout << "The total of these numbers is " << total << endl;

	system("pause");
	return 0;
}