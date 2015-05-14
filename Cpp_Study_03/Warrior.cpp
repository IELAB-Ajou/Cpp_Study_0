//
//  Warrior.cpp
//  Cpp_Study_03
//
//  Created by ssas on 2015. 5. 14..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Warrior.h"

Warrior::Warrior()
{
    cout<<"Warrior 의 Default 생성자"<<endl;
    sName_ = NULL;
}

Warrior::Warrior(int iX, int iY, int iHp, int iDmg, const char* sName)
{
    cPt_.iX_ = iX;
    cPt_.iY_ = iY;
    iHp_ = iHp;
    iAttackDmg_ = iDmg;
    
    sName_ = new char[strlen(sName)+1];
    strcpy(sName_, sName);
    
    cout<<"Warrior "<<sName_<<"  의 생성자"<<endl;
}

Warrior::~Warrior()
{
    if (sName_ == NULL)
    {
        cout<<"sName_ 이 할당되지 않은 Warrior 의 소멸자."<<endl;
        return;
    }
    cout<<"Warrior "<<sName_<<" 의 소멸자"<<endl;
    delete sName_;
}

void Warrior::SetPositionX(int iX)
{
    cPt_.iX_ = iX;
    //cPt_.SetX(iX);
    
    PrintInfo();
    this->PrintInfo();
}

void Warrior::PrintInfo()
{
    cout<<"Warrior Info : Pt: ("<<cPt_.iX_<<", "<<cPt_.iY_<<
                        ") , Hp: "<<iHp_<<
                        ", Dmg: "<<iAttackDmg_<<
                        ", Name: "<<sName_<<endl;
}