//Submitted by Sabin Sapkota//

#include<iostream>
#include<string>
using namespace std;


string sort(string &s) {
	for (int i = 0; i< s.length()-1;i++) {
		char currentmin = s[i];
		int currentminindex = i;

		for (int j = i+1; j <s.length(); j++) {
			if (currentmin > s[j]) {
				currentmin = s[j];
				currentminindex = j;
			}
		}
		//swaps the required letters//
		if (currentminindex != i) { 
			s[currentminindex] = s[i];
			s[i] = currentmin;
		}
	}
	return s;
}
int main() {
	cout << "Enter a string: ";
	string s;
	cin >> s;
	cout << "The sorted string is " << sort(s) << endl;

	return 0;


}