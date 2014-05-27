#ifndef __UTILS_H__
#define __UTILS_H__

#include "cocos2d.h"
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <iostream>
USING_NS_CC;

const int  g_groundHight = 50;

// 
typedef enum {
    ROLE_STATE_INVALID = 0,
    ROLE_STATE_RUNNER, // 跑动
    ROLE_STATE_COIN,     // 金币
    ROLE_STATE_ROCK, // 滚动
}ROLE_STATE;

// 主角状态
enum RunnerStat
{
    RunnerStatRunning = 0,//奔跑
    RunnerStatJumpUp = 1,//跳起
    RunnerStatJumpDown = 2,//下落
    RunnerStatCrouch = 3,//蹲下
    RunnerStatIncredible = 4//无敌
};

#define MAP_COUNT (2)

enum SpriteTag
{
    SpriteTagrunner = 0,
    SpriteTagcoin = 1,
    SpriteTagrock = 2
};

enum {
    TAG_STATUSLAYER = 10,
    TAG_GAMEOVER,
    TAG_PLAYER,
};


typedef enum {
	SimpleGesturesRight,
	SimpleGesturesLeft,
	SimpleGesturesUp,//
	SimpleGesturesDown,//
	SimpleGesturesError,//
	SimpleGesturesNotSupport
    
} SimpleGestures;
#endif // __UTILS_H__