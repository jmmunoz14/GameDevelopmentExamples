#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
	Account account1{"Jane Green"};
	Account account2{ "John Blue" };

	cout << "account1 name is: " << account1.getName();
	cout << "\naccount2 name is: " << account2.getName();
}
