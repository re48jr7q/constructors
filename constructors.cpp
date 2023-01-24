#include <iostream>
#include <cassert>

class Fraction
{
private:		
	int m_numerator{};
	int m_denominator{};
public:

	Fraction(int numerator = 0, int denominator = 1)
	{
		assert(denominator != 0);

		m_numerator = numerator;
		m_denominator = denominator;
	}

	int getNumerator() { return m_numerator; }
	int getDenominator() { return m_denominator; }
	double getValue() {
		return static_cast<double>(m_numerator)
			/ m_denominator;
	}
};
int main()
{
	Fraction zero;				//calls 0 1
	Fraction zero{};			//calls 0 1
	Fraction six{ 6 };			//calls 6 1
	Fraction fiveThirds{ 5, 3 };//calls 5 3
	
	return 0;
}

