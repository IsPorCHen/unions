#include <iostream>

using namespace std;

union Info {
	struct {
		string phoneNumber;
		string address;
	} clinic;

	struct {
		char maritalStatus[1];
	} maritalStatus;
};

struct Employee {
	string surname;
	char gender[1];
	int daysOnSickLeave;
};
int main()
{
	Employee employeers[] {
		{"vasilev", 'm', 21},
		{"yunusov", 'm', 10}
	};

	if (employeers->daysOnSickLeave > 21) {

	}
	else {

	}
}
