#ifndef __SIMPLE_RECOGNIZER_H__
#define __SIMPLE_RECOGNIZER_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "chipmunk.h"
#include "Utils.h"

USING_NS_CC;
USING_NS_CC_EXT;


class CPoint
{
public:
	//--- Wobbrock used doubles for these, not ints
	//int x, y;
	double x, y;
	CPoint()
	{
		this->x=0;
		this->y=0;
	}
	CPoint(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
};

class SimpleRecognizer
{
protected:
	//--- These are variables because C++ doesn't (easily) allow
	//---  constants to be floating point numbers
	double X;
	double Y;
	SimpleGestures result;
    std::vector<CPoint> points;

public:
	SimpleRecognizer();
    
	void beginPoint(double x, double y);
	void movePoint(double x, double y);
	SimpleGestures endPoint();

    std::vector<CPoint>& getPoints();
    
};

#endif // __SIMPLE_RECOGNIZER_H__