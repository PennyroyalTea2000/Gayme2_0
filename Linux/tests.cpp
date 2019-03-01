
/*
	There are we testing new fitches.
*/

#include <vector>
#include <iostream>

class Value {
protected:
	int value;
public:
	Value() { value = 25; }
	int getValue() { return value; }
	void setValue(int new_) { value = new_; }
};

class Value2 : public Value {
public:
	void eraseValue() { value = 0; }
};

class Value3 : public Value {
public:
	void maxValue() { value = 100; }
};

class Value4 : public Value {
public:
	void middleValue() { value = 50;	}
};

int main() {
	std::vector<Value*> vec;
	Value2 v2;
	Value3 v3;
	Value4 v4;
	vec.push_back(&v2);
	vec.push_back(&v3);
	vec.push_back(&v4);
	vec[0]->eraseValue();
	vec[1]->maxValue();
	vec[2]->middleValue();
	return 0;
}
