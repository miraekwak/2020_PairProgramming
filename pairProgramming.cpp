#include <iostream>
#include "Cafe.cpp"

/* 객체지향설계
   201902650 곽미래
   201902652 권순재
*/
using namespace std;

int main()
{
	// 0.99 1.5
	Beverage* Tall = new Decaf(TALL); // 2.55
	Beverage* Grande = new HouseBlend(GRANDE); // 1.89
	Beverage* Venti = new Espresso(VENTI); // 2.49

	Venti = new Milk(Venti); // 0.6
	Venti = new Whip(Venti); // 0.67
	Grande = new Soy(Grande); // 1.15
	Grande = new Soy(Grande); // 1.15
	Tall = new Mocha(Tall); // 1.7

	cout << "음료 정보: " << Tall->getDescription() << endl;
	cout << "가격: $ " << Tall->getCost() << endl;
	cout << "음료 정보: " << Grande->getDescription() << endl;
	cout << "가격: $ " << Grande->getCost() << endl;
	cout << "음료 정보: " << Venti->getDescription() << endl;
	cout << "가격: $ " << Venti->getCost() << endl;
}
