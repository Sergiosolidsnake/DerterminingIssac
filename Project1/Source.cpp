#include <iostream>
#include <string>

using namespace std;

string IsaacIsGay() {
	char person1, person2;
	cout << "Is the person whom Isaac likes a boy or girl?(b/g)" << endl;
	cin >> person1;
	cout << "Is Isaac a boy or girl?(b/g)";
	cin >> person2;
	if (person1 == person2) {
		return "Gay AF";
	}
	else if(person1 != person2) {
		return "Not Gay";
	}
}

int main() {
	cout << IsaacIsGay() << endl;
	system("pause");
	return 0;
}