/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "Player.h"
#include "Constants.h"

USING_NS_CC;

Player::Player(cocos2d::Layer* layer)
{
	visibleSize = Director::getInstance()->getVisibleSize();
	origin = Director::getInstance()->getVisibleOrigin();

	playerSprite = Sprite::create("Assets/character_zombie_sheet.png", Rect(1, 0, PLAYER_SPRITESHEET_SIZE_X / 11, PLAYER_SPRITESHEET_SIZE_Y / 5));
	playerSprite->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

	auto playerBody = PhysicsBody::createBox(Size(playerSprite->getContentSize().width, playerSprite->getContentSize().height));
	playerBody->setCollisionBitmask(PLAYER_COLLISION_BITMASK);
	playerBody->setContactTestBitmask(true);

	playerSprite->setPhysicsBody(playerBody);

	isFalling = true;

	layer->addChild(playerSprite, 100);
}

void Player::Fall() 
{
	if (true == isFalling)
    {
		playerSprite->setPositionX(visibleSize.width / 2 + origin.x);
		playerSprite->setPositionY(playerSprite->getPositionY() - (PLAYER_FALLING_SPEED * visibleSize.height));
	}
	else
	{
		playerSprite->setPositionX(visibleSize.width / 2 + origin.x);
		playerSprite->setPositionY(playerSprite->getPositionY() + (PLAYER_FALLING_SPEED * visibleSize.height));
	}
}