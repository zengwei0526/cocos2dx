#include "GameLayer.h"

CCScene* GameLayer::scene(){
	CCScene* sc = NULL;
	do
	{
		sc = CCScene::create();
		CC_BREAK_IF(!sc);
		GameLayer* layer = GameLayer::create();
		CC_BREAK_IF(!layer);
		sc->addChild(layer);
	} while (0);
	return sc;
}

bool GameLayer::init(){
	bool bRet = false;
	do
	{
		//��Ļ��С
		CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
		//��Ļ��������
		CCPoint centerPos = ccp(visibleSize.width/2,visibleSize.height/2);

		//����
		CCSprite* bgSprite = CCSprite::create("MainBG.png");
		bgSprite->setPosition(centerPos);
		bgSprite->setScaleX(visibleSize.width/bgSprite->getContentSize().width);
		bgSprite->setScaleY(visibleSize.height/bgSprite->getContentSize().height);
		this->addChild(bgSprite);

		//��ʼ�˵�
		CCMenuItemImage* startItem = CCMenuItemImage::create("start_n.png","start_s.png",this,menu_selector(GameLayer::menuStartCallback));

		//�˳��˵�
		CCMenuItemImage* closeItem = CCMenuItemImage::create("restart_n.png","restart_s.png",this,menu_selector(GameLayer::menuCloseCallback));
		CCMenu* menu = CCMenu::create(startItem,closeItem,NULL);
		menu->alignItemsVerticallyWithPadding(20);
		menu->setPosition(centerPos);
		this->addChild(menu);

		// preload music
		SimpleAudioEngine *audioEngine = SimpleAudioEngine::sharedEngine();
		audioEngine->preloadBackgroundMusic("background.mp3");
		audioEngine->preloadEffect("jump.mp3");
		audioEngine->preloadEffect("crouch.mp3");
		audioEngine->setBackgroundMusicVolume(0.3f);
		audioEngine->setEffectsVolume(0.3f);
		bRet = true;
	} while (0);
	return bRet;
}

//��ʼ��Ϸ�ص�����
void GameLayer::menuStartCallback(CCObject* pSender){
	SimpleAudioEngine *audioEngine = SimpleAudioEngine::sharedEngine();
    audioEngine->playBackgroundMusic("background.mp3",true);

    CCDirector::sharedDirector()->replaceScene(PlayLayer::scene());
}

//�˳���Ϸ�ص�����
void GameLayer::menuCloseCallback(CCObject* pSender){
	CCDirector::sharedDirector()->end();
}