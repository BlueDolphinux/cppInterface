#include <iostream>

using namespace std;

class Character {
private:
     string _name;

public:
	Character(string Name) {
        string  _name = Name;
	}

	string getName() {
		return _name;
	}
} 



int main(void) {
    Character character1("slime");
    cout << "character1: " << character1.getName();
    return 0;
}

