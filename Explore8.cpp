
#include <iostream>
using namespace std;
struct Point {
	double x;
	double y;
	Point();
	Point(double xVal, double yVal);
};
struct Line {
    Point start;
    Point end;
    Line(Point s, Point e);
};
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

Line::Line(Point s, Point e) {
    start = s;
    end = e;
}

void PrintPoint(Point p) {
    cout << ": x = " << p.x << ", y = " << p.y;
}


void PrintLine(Line l) {
    cout << "  Start";
    PrintPoint(l.start);
    cout << "   End";
    PrintPoint(l.end); 
    cout << endl;
}

// This is new
Point FindMidPoint(Line l) {
    Point mid;
    mid.x = (l.start.x + l.end.x)/2.0;
    mid.y = (l.start.y + l.end.y)/2.0;
    return mid;
}

Point FindLowestPoint(Line I) {
    Point low;
    if (I.start.x > I.end.x) {
      low.x = I.end.x;
    }
    else {
      low.x = I.start.x;
    }

    if (I.start.y > I.end.y) {
      low.y = I.end.y;
    }
    else {
      low.y = I.start.y;
    }

    return low;
}

int main() {
    Line a(Point(3,9), Point(12,22));
    cout << "Line a";
    PrintLine(a);
    cout << "Line a's midpoint";
    // This is new
    Point midPoint = FindMidPoint(a);
    PrintPoint(midPoint);
    cout << endl;
    cout << "Line a's lowest point";
    Point lowPoint = FindLowestPoint(a);
    PrintPoint(lowPoint);
    cout << endl;

    return 0;
}


