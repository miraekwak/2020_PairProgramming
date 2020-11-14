#include <iostream>
using namespace std;

enum CupSize {
	TALL, GRANDE, VENTI
};

class Beverage {
public:
	string description;
	double cost;
	CupSize Size;

public:
	Beverage() {
		description = "Unknown";
	}
	virtual string getDescription() = 0;
	virtual double getCost() = 0;
	virtual CupSize getSize() = 0;
};

class CondimentDecorator : public Beverage  {
public:
	Beverage* bever;
	virtual string getDescription() = 0;

};

class Decaf : public Beverage {
public:
	Decaf(CupSize size) {
		description = "Decaf";
		cost = 1.05;
		Size = size;
	}
	string getDescription() {
		return description;
	}
	double getCost() {
		if(getSize() == TALL ){
			return cost + 1.5;
		}
		else if (getSize() == GRANDE){
			return cost + 1.0;
		}
		else if (getSize() == VENTI){
			return cost + 0.5;
		}
	}
	CupSize getSize(){
		return Size;
	}
};
class Espresso : public Beverage {
public:
	Espresso(CupSize size) {
		description = "Espresso";
		cost = 1.99;
		Size = size;
	}
	string getDescription() {
		return description;
	}
	double getCost() {
		if(getSize() == TALL){
			return cost + 1.5;
		}
		else if (getSize() == GRANDE){
			return cost + 1.0;
		}
		else if (getSize() == VENTI) {
			return cost + 0.5;
		}
	}
	CupSize getSize(){
		return Size;
	}
};
class HouseBlend : public Beverage {
public:
	HouseBlend(CupSize size) {
		description = "HouseBlend";
		cost = 0.89;
		Size = size;
	}
	string getDescription() {
		return description;
	}
	double getCost() {
		if(getSize() == TALL){
			return cost + 1.5;
		}
		else if (getSize() == GRANDE){
			return cost + 1.0;
		}
		else if (getSize() == VENTI) {
			return cost + 0.5;
		}
	}
	CupSize getSize(){
		return Size;
	}

};
class DarkRoast : public Beverage {
public:
	DarkRoast(CupSize size) {
		description = "DarkRoast";
		cost = 0.99;
		Size = size;
	}
	string getDescription() {
		return description;
	}
	double getCost() {
		if(getSize() == TALL){
			return cost + 1.5;
		}
		else if (getSize() == GRANDE){
			return cost + 1.0;
		}
		else {
			return cost + 0.5;
		}
	}
	CupSize getSize(){
		return Size;
	}
};


class Milk : public CondimentDecorator {
public:
	Milk(Beverage* b) {
		bever = b;
		description = "Milk";
		cost = 0.10;
		Size = bever->getSize();
	}

	string getDescription() {
		return bever->getDescription() + ", " + description;
	}
	double getCost() {
		if(getSize() == TALL){
			return bever->getCost() + cost + 1.5;
		}
		else if(getSize() == GRANDE){
			return bever->getCost() + cost + 1.0;
		}
		else if (getSize() == VENTI) {
			return bever->getCost() + cost + 0.5;
		}
	}
	CupSize getSize() {
		return Size;
	}
};
class Mocha : public CondimentDecorator {
public:
	Mocha(Beverage* b) {
		bever = b;
		description = "Mocha";
		cost = 0.20;
		Size = bever->getSize();
	}

	string getDescription() {
		return bever->getDescription() + ", " + description;
	}
	double getCost() {
		if(getSize() == TALL){
			return bever->getCost() + cost + 1.5;
		}
		else if(getSize() == GRANDE){
			return bever->getCost() + cost + 1.0;
		}
		else if (getSize() == VENTI) {
			return bever->getCost() + cost + 0.5;
		}
	}
	CupSize getSize() {
		return Size;
	}
};
class Soy : public CondimentDecorator {
public:
	Soy(Beverage* b) {
		bever = b;
		description = "Soy";
		cost = 0.15;
		Size = bever->getSize();
	}

	string getDescription() {
		return bever->getDescription() + ", " + description;
	}
	double getCost() {
		if(getSize() == TALL){
			return bever->getCost() + cost + 1.5;
		}
		else if(getSize() == GRANDE){
			return bever->getCost() + cost + 1.0;
		}
		else if (getSize() == VENTI) {
			return bever->getCost() + cost + 0.5;
		}
	}
	CupSize getSize() {
		return Size;
	}
};
class Whip : public CondimentDecorator {
public:
	Whip(Beverage* b) {
		bever = b;
		description = "Whip";
		cost = 0.17;
		Size = bever->getSize();
	}

	string getDescription() {
		return bever->getDescription() + ", " + description;
	}
	double getCost() {
		if(getSize() == TALL){
			return bever->getCost() + cost + 1.5;
		}
		else if(getSize() == GRANDE){
			return bever->getCost() + cost + 1.0;
		}
		else if (getSize() == VENTI) {
			return bever->getCost() + cost + 0.5;
		}
	}
	CupSize getSize() {
		return Size;
	}
};