#include <iostream>
#include <math.h>
using namespace std;

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}

int main() {
	string a;
	string b;
	cout << "Input number a=";
	cin >> a;
	if (!isNumber(a)) {
		cout << "False\n";
	} else {
		cout << "Input number b=";
		cin >> b;
		if (isNumber(b)) {
			cout << "a+b=" << stoi(a) + stoi(b) << endl;
		} else {
			cout << "False\n";
		}
	}   	
  return 0;
}

