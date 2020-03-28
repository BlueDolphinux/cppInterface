#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



class Character{
private:
     string name;
	 int    HP;
	 int    attack;
	 int    defence;

public:
	Character(string _Name, int _HP, int _Attack, int _Defence) {
        name = _Name;
		HP = _HP;
		attack = _Attack;
		defence = _Defence;
	}

	string getName() {
		return name;
	}

	int getAttack() {
		return attack;
	}
	int getDefence() {
	return defence;
	}

	int getHP() {
		return HP;
	}
	void setHP(int _HP) {
		HP = _HP;
	}

	int attackTo(Character* to) {
		double baseDamage = attack / 2.0 - to->getDefence() / 4.0;
		srand(time(NULL));
		double difference = baseDamage / 12.0 + 1;
		int damage = (int) (difference * (rand() - 0.5) * 2 + baseDamage);
		int restHP = to->getHP();
		restHP -= damage;
		if (restHP <= 0) {
			to->setHP(0);
		}
		else {
			to->setHP(restHP);
		}
		return damage;
	}

	bool isDeath() {
		if (HP <= 0) {
			return true;
		}
		else {
			return false;
		}
	}
}; 

int main(void) {
    Character character1("hero", 16, 10, 4);
	Character character2("slimebess", 12, 7, 5);
    cout << character1.getName() <<"の攻撃！"<< endl;
	cout << character2.getName() << "は" << character1.attackTo(&character2) << "ダメージ受けた！"<<endl;
	if (character2.isDeath()) {
		cout << character1.getName() << "は" << character2.getName() << "を倒した！" << endl;
	}
    return 0;
}



