#ifndef __OBJECT_MANAGER_H__
#define __OBJECT_MANAGER_H__

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class ObjectManager
{
private:
    cpSpace *pSpace;
    CCSpriteBatchNode *pSpriteSheet;
    std::list<CCSprite *> objects;
public:
    ObjectManager(CCSpriteBatchNode *spriteSheet, cpSpace *space);
    ~ObjectManager();

    void initObjectOfMap(int mapIndex, float mapWidth);
    void removeObjectOfMap(int mapIndex);
    void remove(CCSprite *obj);

};

#endif // __OBJECT_MANAGER_H__