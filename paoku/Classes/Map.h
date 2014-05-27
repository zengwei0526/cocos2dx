#ifndef __MAP_H__
#define __MAP_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "chipmunk.h"
#include "MapManager.h"

USING_NS_CC;
USING_NS_CC_EXT;

class Map : public CCSprite
{
public:
    static Map *create(int index);
    Map(int index);
    ~Map();
    
    void reload(int index);
private:
    const char *getMapName(int index);
    const char *getGroundName(int index);
};

#endif // __MAP_H__