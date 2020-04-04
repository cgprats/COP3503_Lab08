#include <iostream>
#include "Color.h"

void Color::SetValue(int value) {
	_intValue = value;
	_r = value >> 16;
	_g = value >> 8;
	_b = value;
	_hex = "0x";
	char temp;
	temp = _r / 16;
	if (temp < 10) {
		_hex = _hex + std::to_string(temp);
	}
	else if (temp == 10) {
		_hex = _hex + 'A';
	}
	else if (temp == 11) {
		_hex = _hex + 'B';
	}
	else if (temp == 12) {
		_hex = _hex + 'C';
	}
	else if (temp == 13) {
		_hex = _hex + 'D';
	}
	else if (temp == 14) {
		_hex = _hex + 'E';
	}
	else if (temp == 15) {
		_hex = _hex + 'F';
	}
	temp = _r % 16;
	if (temp < 10) {
		_hex = _hex + std::to_string(temp);
	}
	else if (temp == 10) {
		_hex = _hex + 'A';
	}
	else if (temp == 11) {
		_hex = _hex + 'B';
	}
	else if (temp == 12) {
		_hex = _hex + 'C';
	}
	else if (temp == 13) {
		_hex = _hex + 'D';
	}
	else if (temp == 14) {
		_hex = _hex + 'E';
	}
	else if (temp == 15) {
		_hex = _hex + 'F';
	}
	temp = _g / 16;
	if (temp < 10) {
		_hex = _hex + std::to_string(temp);
	}
	else if (temp == 10) {
		_hex = _hex + 'A';
	}
	else if (temp == 11) {
		_hex = _hex + 'B';
	}
	else if (temp == 12) {
		_hex = _hex + 'C';
	}
	else if (temp == 13) {
		_hex = _hex + 'D';
	}
	else if (temp == 14) {
		_hex = _hex + 'E';
	}
	else if (temp == 15) {
		_hex = _hex + 'F';
	}
	temp = _g % 16;
	if (temp < 10) {
		_hex = _hex + std::to_string(temp);
	}
	else if (temp == 10) {
		_hex = _hex + 'A';
	}
	else if (temp == 11) {
		_hex = _hex + 'B';
	}
	else if (temp == 12) {
		_hex = _hex + 'C';
	}
	else if (temp == 13) {
		_hex = _hex + 'D';
	}
	else if (temp == 14) {
		_hex = _hex + 'E';
	}
	else if (temp == 15) {
		_hex = _hex + 'F';
	}
	temp = _b / 16;
	if (temp < 10) {
		_hex = _hex + std::to_string(temp);
	}
	else if (temp == 10) {
		_hex = _hex + 'A';
	}
	else if (temp == 11) {
		_hex = _hex + 'B';
	}
	else if (temp == 12) {
		_hex = _hex + 'C';
	}
	else if (temp == 13) {
		_hex = _hex + 'D';
	}
	else if (temp == 14) {
		_hex = _hex + 'E';
	}
	else if (temp == 15) {
		_hex = _hex + 'F';
	}
	temp = _b % 16;
	if (temp < 10) {
		_hex = _hex + std::to_string(temp);
	}
	else if (temp == 10) {
		_hex = _hex + 'A';
	}
	else if (temp == 11) {
		_hex = _hex + 'B';
	}
	else if (temp == 12) {
		_hex = _hex + 'C';
	}
	else if (temp == 13) {
		_hex = _hex + 'D';
	}
	else if (temp == 14) {
		_hex = _hex + 'E';
	}
	else if (temp == 15) {
		_hex = _hex + 'F';
	}
}
void Color::SetName(const char* name) {
	_name = name;
}
unsigned char Color::GetR() const {
	return _r;
}
unsigned char Color::GetG() const {
	return _g;
}
unsigned char Color::GetB() const {
	return _b;
}
std::string Color::GetHexValue() const {
	return _hex;
}
std::string Color::GetName() const {
	return _name;
}
void Color::DisplayColor() const {
	std::cout << _name << "\t" << _hex << "\t" << (int) _r << "," << (int) _g << "," << (int) _b << std::endl;
}
