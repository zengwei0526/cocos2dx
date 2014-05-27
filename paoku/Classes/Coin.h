#ifndef __COIN_H__
#define __COIN_H__
#include "cocos2d.h"
#include "cocos-ext.h"
#include "chipmunk.h"
#include "Utils.h"

USING_NS_CC;
USING_NS_CC_EXT;

class Coin : public CCPhysicsSprite
{
public:
    static Coin *create(CCSpriteBatchNode *spriteSheet, cpSpace *space, CCPoint position);
    Coin(CCSpriteBatchNode *spriteSheet, cpSpace *space, CCPoint position);
    virtual void removeFromParent();
    
    
    static const CCSize* getCoinContentSize()
	{
        CCPhysicsSprite *sprite = CCPhysicsSprite::createWithSpriteFrameName("coin0.png");
        return &sprite->getContentSize();
	}
private:
    cpSpace *pSpace;//weak ref
    cpShape *pShape;
    cpBody *pBody;

};

#endif // __COIN_H__