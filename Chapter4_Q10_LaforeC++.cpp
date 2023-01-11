// Chapter 4 Question 10. Robert Lafore Solution
// convert dec british pounds to pound-sterling-pence using structure

#include <iostream>

using namespace std;

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

int main(void)
{
	double newpounds, newpennyfrac;
	sterling oldmoney;
	int newpoundswd, newpenny; // to store pounds and penny separately

	cout << "Enter amount in British decimal pounds: ";
	cin >> newpounds;

	newpoundswd = static_cast <int> (newpounds); // newpounds int part
	newpennyfrac = newpounds - newpoundswd; // removes decimal part
	newpenny = static_cast <int> (newpennyfrac * 100); // converts decimal penny to int penny

	oldmoney.pounds = newpoundswd;
	oldmoney.shillings = newpenny / 12; // 12 penny in a shilling
	oldmoney.pence = newpenny % 12; // what's left after shilling is oldpenny
	
	cout << "Old British system money (Pounds-Shillings-Pence): " << "\x9c " << oldmoney.pounds << "." << oldmoney.shillings << "." << oldmoney.pence << endl; // x9c is hex value for £
	
	return 0;
}