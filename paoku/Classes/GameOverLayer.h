#ifndef __GAME_LAYER_H__
#define __GAME_LAYER_H__

#include "cocos2d.h"
#include "PlayLayer.h"

USING_NS_CC;

class GameOverLayer : public CCLayerColor
{
public:
    static GameOverLayer* create(const ccColor4B& color);
    virtual bool initWithColor(const ccColor4B& color);
private:
    void onRestart(CCObject* pSender);
};
#endif // __GAME_LAYER_H__