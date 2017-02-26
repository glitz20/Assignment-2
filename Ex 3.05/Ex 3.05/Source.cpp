 //Submitted by Sabin Sapkota//

#include<iostream>
#include<sstream> 

using namespace std;

class MyInteger {
public:
	MyInteger(int x) {
		value = x;
	}
 	int getinteger()const {
		return value;
	}
	bool isEven()const
	{
		return isEven(value);
	}
	static bool isEven(int d) {
		return d % 2 == 0;
	}
	static bool isEven(const MyInteger& d) {
		return isEven(d.getinteger());
	}

	bool isOdd()const
	{
		return isOdd(value);
	}
	static bool isOdd(int e) {
		return e % 2 == 1;
	}
	static bool isOdd(const MyInteger& e) {
		return isOdd(e.getinteger());
	}

	bool isPrime()const
	{
		return isPrime(value);
	}
	static bool isPrime(int f) {
		if ((f == 1 || f == 2)) {
			return true;
		}
		for (int i = 2; i < f / 2; i++) {
			if (f%i == 0)
				return false;
		}

		return true;
	}
	static bool isPrime(const MyInteger& f) {
		return isPrime(f.getinteger());
	}
	bool equals(int anotherNum) const {
		return value == anotherNum;
	}

	bool equals(const MyInteger& o)const
	{
		return value == o.getinteger();
	}

	static void parseInt(const string& m) {
		stringstream ss(m);
		int i;
		ss >> i;
		cout << i << endl;
	}

private:
	int value;

};
int main() {
	MyInteger la(6);
	
	
	cout << "Is la even? " << la.isEven() << endl;
	cout << "Is la odd? " << la.isOdd() << endl;
	cout << "Is la prime? " << la.isPrime() << endl;
	cout << "Is la equal to 6?" << la.equals(6) << endl;
	cout << "Converting string to int for: ";
	MyInteger::parseInt("123");
	cout << "Is 3 odd? " << MyInteger::isOdd(3) << endl;
	cout << "Is 3 Even? " << MyInteger::isEven(3) << endl;
	cout << "Is 3 Prime? " << MyInteger::isPrime(3) << endl;

}