#include <iostream>
using namespace std;

struct Pixels
{
	int color, style;
};
void showPoint(Pixels P)
{
	cout << P.color<< P.style << endl;
};
int main()
{
	Pixels Point1 = {7,5};
        showPoint(Point1);
        Pixels Point2 = Point1;
        Point1.color += 2;
        showPoint(Point2);
 }
