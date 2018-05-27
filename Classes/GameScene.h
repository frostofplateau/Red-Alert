//游戏界面

#ifndef __GameScene_H_
#define __GameScene_H_
#include"cocos2d.h"
#include<iostream>
#include"MyUtility.h"
#include"ConstUtil.h"
#include"MenuScene.h"
#include"Buildings/Buildings.h"

USING_NS_CC;



class GameScene :public Layer
{
public:

	static Scene *creatScene();
	virtual bool init();
	virtual void onEnter();
	virtual void onExit();
	CREATE_FUNC(GameScene);

private:
	//EventListenerTouchOneByOne * touchBuildingListener;

	void backToMenuScene(Ref *pSender);//返回MenuScene
	void buildingsCreate(Ref *pSender);//选择建筑物建造，建筑物菜单回调方法

	void casernReady(float dt);//兵营准备
	//////////////////////////////
	//待添加其他建筑物的准备方法
	//////////////////////////////

	void moneyUpdate(float dt);//实时刷新金钱

	int Money;//金钱
};


#endif // !__GameScene_H_
