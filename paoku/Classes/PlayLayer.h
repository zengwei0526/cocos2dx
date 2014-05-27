#ifndef __PLAY_LAYER_H__
#define __PLAY_LAYER_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "chipmunk.h"
#include "Utils.h"

USING_NS_CC;
USING_NS_CC_EXT;

class Runner;
class MapManager;
class ObjectManager;
class SimpleRecognizer;

class PlayLayer : public CCLayer
{
public:
    CREATE_FUNC(PlayLayer);
    ~PlayLayer();
    virtual void onExit();
    virtual bool init();
    virtual void update(float dt);
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
    
    static CCScene* scene();
private:
    cpSpace *space;
    cpShape *wallBottom;
    CCSpriteBatchNode *spriteSheet;
    Runner *runner;
    MapManager *mapManager;
    ObjectManager *objectManager;
    float lastEyeX;
    
    void notifiCoin(CCObject *unuse);
    void notifiRock(CCObject *unuse);
    
    CCPoint touchBeganPoint,touchEndedPoint;
    std::list<CCPoint> points;
    
    SimpleRecognizer *recognizer;
};

#endif // __PLAY_LAYER_H__