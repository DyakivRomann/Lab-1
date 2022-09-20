
#pragma once
#include <math.h>

class B
{

private:
	double x;
	double y;
	double z;
public:
	B(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	double calculate()
	{
		double result = (pow(abs(y + x), 0.2)) / (pow(abs(z), 1.34));
		result += (pow((y - z), 2)) / (1 + pow((sin(z)), 2));
		result += (pow(abs(z - y), 3)) / (z / (cos(pow((x), 2))));
		return x * result;
	}

	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getZ()
	{
		return z;
	}

};

class A : public B
{

private:
	double b;

public:

	A(double x, double y, double z, double b) : B(x, y, z)
	{
		this->b = b;
	}

	double calculate()
	{
		double result = sqrt(pow(abs(getX() * getX() - 1), 0.3));
		result -= pow(abs(sin(getY() + 2 * getB())), 1 / 3);
		result /= 1 + (pow(getX(), 1) / fac(1)) + (pow(getY(), 2) / fac(2)) + (pow(getZ(), 3) / fac(3));
		return result;
	}

	double fac(int a)
	{
		if (a <= 1)
		{
			return 1;
		}

		return fac(a - 1) * a;
	}

	double getB()
	{
		return b;
	}

};