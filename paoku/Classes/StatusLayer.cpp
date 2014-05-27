#include "StatusLayer.h"

bool StatusLayer::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!CCLayer::init());
		coins = 0;
		this->setTag(1);
		this->labelCoin = CCLabelTTF::create("Coins:0", "Helvetica", 25);
		this->labelCoin->setPosition(ccp(70, 300));
		this->addChild(this->labelCoin);
    
		this->labelMeter = CCLabelTTF::create("0M", "Helvetica", 25);
		this->labelMeter->setPosition(ccp(300,300));
		this->addChild(this->labelMeter);
    
		bRet = true;
	} while (0); 
    return bRet;
}

void StatusLayer::addCoin(int num)
{
    coins += num;
    this->labelCoin->setString(CCString::createWithFormat("Coins:%ld",coins)->getCString());
}

void StatusLayer::updateMeter(int px)
{
    this->labelMeter->setString(CCString::createWithFormat("%d:%s", px/10, "M")->getCString());
}