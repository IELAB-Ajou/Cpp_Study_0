//
//  main.cpp
//  Cpp_Study_03
//
//  Created by ssas on 2015. 5. 14..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Warrior.h"

void SetWarriorHp(Warrior& cWar, int iHp)   // SetWarriorHp(cWarrior, 10); //Warrior& cWar = cWarrior;
{
    cWar.iHp_ = iHp;
}

int main(int argc, const char * argv[]) {
    /*  정보 은닉 관련 설명
    Point cPt;
    //cPt.iX_ = 10;
    //cPt.iY_ = 20;
    
    // 만약에 iX_ 와 iY_ 가 무조건 0 이상이어야 하는 경우가 있다면...
    //cPt.iX_ = -10;
    //cPt.iY_ = -20;      // 컴파일러에서는 에러를 발생시키지 않지만 문제가 되는 부분
    
    // 그렇기 때문에 private 으로 정보은닉을 하고 따로 함수를 만들어서 제어를 해야한다.
    cPt.SetX(-10);
    cPt.SetY(-20);
    cout<<"point : "<<cPt.GetX()<<", "<<cPt.GetY()<<endl;
     */
    /*
    Warrior cWarrior = {{5, 5}, 100, 20};   // 이것은 생성과 동시에 초기화가 아니다.
                                            // 그러므로 private 멤버에 대한 접근이 제한된다.
    Warrior cWarrior;
    cWarrior.Setup(iX, iY, iHp, iDmg);      // 이런 방법도 가능은 하겠지만 생성과 동시에 초기화가 아니다.
     */
    Warrior cWarrior(5, 5, 100, 20, "DrOh");        // 생성자를 통한 초기화 (변수명 cWarrior)
    cWarrior.PrintInfo();
    
    cout<<"------------"<<endl;
    Warrior* pWarrior = new Warrior(17, 17, 200, 10, "JongHwan");   // new 로 생성할 때 생성자를 사용할 경우
    pWarrior->PrintInfo();
    cout<<"------------"<<endl;
    delete pWarrior;    // 소멸자를 만들어서 처리하지 않으면 내부에 있는 sName_ 에 할당한 메모리는 해제되지 않는다.
    cout<<"------------"<<endl;
    
    Warrior cArrWarrior[3];
    
    Warrior* pArrWarrior[3];
    for (int i=0; i<3; ++i)
    {
        pArrWarrior[i] = new Warrior(17, 17, 200, 10, "Test");
    }
    
    delete pArrWarrior[0];
    delete pArrWarrior[1];
    delete pArrWarrior[2];
    
    return 0;
}
