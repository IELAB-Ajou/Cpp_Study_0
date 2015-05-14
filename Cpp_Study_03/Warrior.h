//
//  Warrior.h
//  Cpp_Study_03
//
//  Created by ssas on 2015. 5. 14..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef __Cpp_Study_03__Warrior__
#define __Cpp_Study_03__Warrior__

#include <iostream>
#include "Point.h"

using namespace std;

class Warrior
{
private:
    Point cPt_;
    int   iHp_;
    int   iAttackDmg_;
    char* sName_;
    
    friend void SetWarriorHp(Warrior& cWar, int iHp);
    
public:
    Warrior();  // 디폴트 생성자. 정의하지 않아도 이미 존재.
    Warrior(int iX, int iY, int iHp, int iDmg, const char* sName);
    ~Warrior();
    
    void SetPositionX(int iX);
    void PrintInfo();
};

#endif /* defined(__Cpp_Study_03__Warrior__) */
