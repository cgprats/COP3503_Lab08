#pragma once
class Color {
	private:
		int _intValue;
		std::string _name;
		std::string _hex;
		unsigned char _r;
		unsigned char _g;
		unsigned char _b;
	public:
		void SetValue(int value);
		void SetName(const char *name);
		unsigned char GetR() const;
		unsigned char GetG() const;
		unsigned char GetB() const;
		std::string GetHexValue() const;
		std::string GetName() const;
		void DisplayColor() const;
};
