#include "GameOverLayer.h"

GameOverLayer* GameOverLayer::create(const ccColor4B& color){
	GameOverLayer* layer = new GameOverLayer();
	layer->initWithColor(color);
	layer->autorelease();
	return layer;
}


bool GameOverLayer::initWithColor(const ccColor4B& color){
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!CCLayerColor::initWithColor(color));
		CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
		CCPoint centerPos = CCPoint(winSize.width / 2, winSize.height / 2);

		CCMenuItemImage *menuItemRestart = CCMenuItemImage::create("restart_n.png", "restart_s.png",this, menu_selector(GameOverLayer::onRestart));
		CCMenu *menu = CCMenu::create(menuItemRestart, NULL);
		menu->setPosition(centerPos);
		this->addChild(menu);
		bRet = true;
	} while (0);
	return bRet;
}

void GameOverLayer::onRestart(CCObject* pSender){
	CCDirector::sharedDirector()->replaceScene(PlayLayer::scene());
    CCDirector::sharedDirector()->resume();
}