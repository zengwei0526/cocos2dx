#ifndef __GAME_LAYER_H__
#define __GAME_LAYER_H__

#include "cocos2d.h"
#include "PlayLayer.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;
using namespace CocosDenshion;

class GameLayer : public CCLayer
{
public:
    virtual bool init();
    static CCScene* scene();
	CREATE_FUNC(GameLayer);
private:
    void menuStartCallback(CCObject* pSender);
	void menuCloseCallback(CCObject* pSender);
    
};

#endif // __GAME_LAYER_H__