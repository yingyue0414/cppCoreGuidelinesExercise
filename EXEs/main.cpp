class Point{
public:
	Point() {}
	double x() const { return _x; }
	double y() const { return _y; }
	void set_x(double x) {_x = x; }
	void set_y(double y) {_y = y; }
	double dsqr() { return (_x * _x + _y * _y); }
private:
	_x = 0.0;
	_y = 0.0;
}

int main() {
	pt = Point();
	pt.set_x(2.0);
	pt.set_y(3.0);
	std::cout << pt.dsqr() << endl;
}