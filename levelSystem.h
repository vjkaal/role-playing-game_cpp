#ifndef LEVELSYSTEM_H_
#define LEVELSYSTEM_H_


#include <cstdint>

typedef std::uint64_t expType;
typedef std::uint16_t levelType;

class levelSystem{
public:

  static const expType LVL2AT = 100u;

  levelSystem(){
    currLvl = 1u;
    currExp = 0u;
    XPToNxtLvl = LVL2AT;
  }

  void gainExp(expType gainedExp){
    currExp += gainedExp;
    while(chkIfLeveled()){}
  }

  levelType getLevel(){
    return currLvl;
  }

  expType getCurrExp(){
    return currExp;
  }

  expType getXPToNxtLvl(){
    return XPToNxtLvl;
  }

  virtual void levelUp() = 0;

protected:
  levelType currLvl;
  levelType levelUpsAvailable;
  expType currExp;
  expType XPToNxtLvl;

  bool chkIfLeveled(){
    static const expType LVLSCALAR = 2u;
    if(currExp > XPToNxtLvl){
      currLvl ++;
      levelUp();
      XPToNxtLvl *= LVLSCALAR;
      currExp = 0u;
      return true;
    }
    return false;
  }
};


#endif
