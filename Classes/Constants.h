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

#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#define TRANSITION_TIME 0.5

#define PIPE_SPRITESHEET_SIZE_X 1680
#define PIPE_SPRITESHEET_SIZE_Y 840
#define PIPE_SPAWN_FREQUENCY 0.005
#define PIPE_GAP 10
#define UPPER_SCREEN_PIPE_THRESHOLD 0.65
#define LOWER_SCREEN_PIPE_THRESHOLD 0.35
#define PIPE_MOVEMENT_SPEED 0.01

#define PLAYER_SPRITESHEET_SIZE_X 864
#define PLAYER_SPRITESHEET_SIZE_Y 640
#define PLAYER_FALLING_SPEED 0.0025
#define PLAYER_FLYING_SPEED 0.00375
#define PLAYER_FLYING_DURATION 0.25

#define REDCROSS_SPRITESHEET_SIZE_X 160
#define REDCROSS_SPRITESHEET_SIZE_Y 48

#define PLAYER_COLLISION_BITMASK 0x000001
#define OBSTACLE_COLLISION_BITMASK 0x000002

#endif // __CONSTANTS_H__
