#include <iostream>
#include <cmath>

const double PI = acos(-1.0);

class Sphere
{
	private:
		double m_radius;

	public:
	Sphere(double radius)
	{
		if(radius < 0)
			std::cout << "Incorrect data";
		else
			m_radius = radius;
	}

	double Volume()
	{
		return (4*PI*pow(m_radius, 3)/3);
	}

	double Square()
	{
		return (4*PI*pow(m_radius, 2));
	}
};

int main()
{	
	Sphere r(15);
	double v = r.Volume();
	double s = r.Square();
	std::cout.precision(10);
	std::cout << v << ' ' << s;
	return 0;
}