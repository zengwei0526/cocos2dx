#ifndef __ROCK_H__
#define __ROCK_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "chipmunk.h"
#include "Utils.h"

USING_NS_CC;
USING_NS_CC_EXT;

class Rock : public CCPhysicsSprite
{
public:
    static Rock *create(CCSpriteBatchNode *spriteSheet, cpSpace *space, CCPoint position);
    Rock(CCSpriteBatchNode *spriteSheet, cpSpace *space, CCPoint position);
    virtual void removeFromParent();
    
    static  const CCSize* getRockContentSize()
    {
        CCPhysicsSprite *sprite = CCPhysicsSprite::createWithSpriteFrameName("rock.png");
        return &sprite->getContentSize();

    };
private:
    cpSpace *pSpace;
    cpShape *pShape;
    cpBody *pBody;
};

#endif // __ROCK_H__