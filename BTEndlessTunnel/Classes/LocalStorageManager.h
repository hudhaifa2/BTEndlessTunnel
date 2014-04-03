//
//  LocalStorageManager.h
//  BTEndlessTunnel
//
//  Created by NSS on 4/1/14.
//
//

#ifndef __BTEndlessTunnel__LocalStorageManager__
#define __BTEndlessTunnel__LocalStorageManager__

#include "cocos2d.h"

enum StorageValues
{
    kStoragePlayerFrog = 0,
};

class LocalStorageManager : public cocos2d::CCObject
{
private:
    LocalStorageManager();
    static cocos2d::CCUserDefault* defaults();
    
    static void incrementTotalGamesPlayed();
    static void setTotalScore(float score);
    static void setMaxScore(float score);
    
public:
    static bool isUsingJoypad();
    static void setControlType(bool joypad);
    
    static int getSelectedPlayer();
    static void setPlayer(StorageValues value);
    
    static float getMaxScore();
    static float getAverageScore();
    
    static int getTotalGamesPlayed();    

    static float getTotalScore();
    
    static void setScore(float score);
    
};

#endif /* defined(__BTEndlessTunnel__LocalStorageManager__) */