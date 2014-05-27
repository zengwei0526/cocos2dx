#ifndef __STATUS_LAYER_H__
#define __STATUS_LAYER_H__

#include "cocos2d.h"

USING_NS_CC;

class StatusLayer :  public CCLayer
{
public:
    virtual bool init();
    void addCoin(int num);
    void updateMeter(int px);
    CREATE_FUNC(StatusLayer);
private:
    CCLabelTTF *labelCoin;
    CCLabelTTF *labelMeter;
    unsigned long int coins;
};

#endif // __STATUS_LAYER_H__