//
//  HudLayer.h
//  BTEndlessTunnel
//
//  Created by NSS on 3/27/14.
//
//

#ifndef __BTEndlessTunnel__HudLayer__
#define __BTEndlessTunnel__HudLayer__

#include "SneakyInputCocos2dx/SneakyJoystick.h"
#include "SneakyInputCocos2dx/SneakyJoystickSkinnedBase.h"

#include "BaseVehicle.h"

class HudLayer : public cocos2d::CCLayer
{
public:
    virtual ~HudLayer();
    HudLayer();
    
    void updateControl(BaseVehicle& player, float dt);
    
private:
    SneakyJoystick* joypad;
    
};


#endif /* defined(__BTEndlessTunnel__HudLayer__) */
