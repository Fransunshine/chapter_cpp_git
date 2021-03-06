/*********************************
 *@author  : NewYork
 *@email   : 2287794993@qq.com
**********************************/

#include <iostream>
#include <math.h>

class Point
{
	//非成员函数设置为友元
	friend float distance(Point &p1, Point &p2);
public:
	Point(int ix = 0, int iy = 0)
		: ix_(ix), iy_(iy)
	{}

	void display()
	{
		std::cout << "(" << ix_
				  << "," << iy_
				  << ")" << std::endl;
	}

private:
	int ix_;
	int iy_;
};

float distance(Point &p1, Point &p2)
{
	float d = sqrt((p1.ix_ - p2.ix_) * (p1.ix_ - p2.ix_) +
				   (p1.iy_ - p2.iy_) * (p1.iy_ - p2.iy_));

	return d;
}

int main(void)
{
	Point p1(1, 2), p2(4, 5);
	p1.display();
	p2.display();

	std::cout << "p1 与 p2的距离：";
	std::cout << distance(p1, p2) << std::endl;
}
