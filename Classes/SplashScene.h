#ifndef __SplashScene_H_
#define __SplashScene_H_
#include"cocos2d.h"
#include<iostream>
#include"ConstUtil.h"
#include"MenuScene.h"
USING_NS_CC;

class SplashScene :Layer
{
public:
	//methods
	bool init();                        //初始化场景
	CREATE_FUNC(SplashScene);           //完成create方法代码的生成
	static Scene * createScene();       //创建场景
	const double MOVE_SPLEED = 0.5f;    //动画播放速度
	void moveSeSpriteToRight();         //定义se.png精灵向左移动的办法
	void moveJingSpriteToRight();       //定义hong.png精灵向左移动的办法
	void initMoveSprite();              //初始化图片的方法
	void startMoveSprite(float dt);     //开始移动方法
	void spriteFadeOut();               //场景消失方法
	void gotoMenuScene();               //动画结束后进入MenuScene方法
	//variable
	Sprite* hong_Sprite;                //hong.png精灵
	Sprite* se_Sprite;                  //se.png精灵
	Sprite* jing_Sprite;                //jing.png精灵
	Sprite* jie_Sprite;                 //jie.png精灵
	Size visibleSize;                   //窗口大小
	Size spriteSize;                    //图片的尺寸大小

};
#endif // !__SplashScene_H_

