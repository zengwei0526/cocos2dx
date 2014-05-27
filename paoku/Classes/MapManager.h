#ifndef __MAP_MANAGER_H__
#define __MAP_MANAGER_H__

#include "cocos2d.h"
#include "chipmunk.h"
#include "Utils.h"

USING_NS_CC;

class Map;

class MapManager
{
private:
    cpSpace *space;//current space;

    float spriteWidth;
    int curMap;// being displayed
    
    Map *map0;
    Map *map1;
public:
    MapManager(CCLayer *parent, cpSpace *pSpace);
    ~MapManager();

    static float getGroundHeight() {return 50.0;};

    float getMapWidth() {return spriteWidth;};
    int getCurMap() {return curMap;};

    bool checkAndReload(float eyeX);
};

#endif //__MAP_MANAGER_H__