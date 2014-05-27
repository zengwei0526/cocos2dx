#ifndef __RUN_NER_H__
#define __RUN_NER_H__

#include "cocos2d.h"
#include "Utils.h"
#include "chipmunk.h"
#include "cocos-ext.h"
#include <vector>
#include <string>
#include "SimpleAudioEngine.h"
#include "MapManager.h"


USING_NS_CC;
USING_NS_CC_EXT;
using namespace CocosDenshion;

class Runner : public CCPhysicsSprite
{
private:
    CCSize  runningSize;
    CCSize crouchSize;

    cpSpace *space;//current space;
    cpBody *body;// runner chipmunk body
    cpShape *shape;// runner chipmunk shape
    RunnerStat m_stat;// init with running status
    CCAction *runningAction;
    CCAction *jumpUpAction;
    CCAction *jumpDownAction;
    CCAction *crouchAction;

    CCParticleFlower *_emitter;

    float m_offsetPx;

public:
    static Runner *create(cpSpace *space);
    Runner(cpSpace *space);
    ~Runner();

    float getoffsetPx() {return m_offsetPx;}
    
    void initAction();
    void initBody();
    void levelUp();
    void initShape(const char* type);
    void jump();
    void crouch();
    void step(float dt);
    void loadNormal(float dt);

	static const CCSize *getCrouchContentSize()
	{
        CCPhysicsSprite *sprite = CCPhysicsSprite::createWithSpriteFrameName("runnerCrouch0.png");
        return &sprite->getContentSize();
	}

};

#endif // __RUN_NER_H__