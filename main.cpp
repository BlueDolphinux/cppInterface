#include <iostream>

using namespace std;

class Character {
private:
     string _name;

public:
	Character(string Name) {
        _name = Name;
	}

	string getName() {
		return _name;
	}
}; 

int main(void) {
    Character character1("slime");
	Character character2("slimebess");
    cout << "character1:" << character1.getName() << endl;
	cout << "character2:" << character2.getName() << endl;
    return 0;
}



