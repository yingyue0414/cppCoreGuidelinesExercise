#include <vector>

/**
 * @brief Exercise 1: Rename the variables in the following class
 * based on C++ Core Guidelines.
 * 
 */
class AppleCount{
public:
	AppleCount(){}
	int getApples() const { return apples; }
	void setApples(int a){ apples = a; }
private:
	int apples = 0;
};

/**
 * @brief Exercise 2: 
 * (1) Rename the functions in the following class based on C++ Core
 * Guidelines.
 * (2) Identify and fix unintialized variables.
 */
class Point{
public:
	Point() {}
	double x() const { return _x; }
	double y() const { return _y; }
	void x(double x) {_x = x; }
	void y(double y) {_y = y; }
	double d_sqr() { return (_x * _x + _y * _y); }
	bool origin() { return (_x == 0 && _y == 0); }
private:
	double _x;
	double _y;
};

/**
 * @brief Exercise 3: Encapsulate the parameters for Particle.simulate(...)
 * into a Param struct. What is the benefit for doing this?
 * 
 */
struct Param{
};
class Particle{
public:
	void simulate(double diffusionConst, double timeStep, double temperature, std::vector<int> boxSideLengths) {
		//...
	}
private:
	double _x;
	double _y;
	double _z;
};

/**
 * @brief Exercise 4:
 * Create a header file which defines Point class in Exercise 2.
 * Define the following functions in your header file:
 * (1) Squared distance same as in Exercise 2
 * (2) Elementwise addition (xsum, ysum) = (x1, y1) + (x2, y2)
 * (3) Dot product dotProduct(pt1, pt2) = x1 * x2 + y1 * y2
 *
 */



int main() {
};