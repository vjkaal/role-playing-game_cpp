#ifndef CLERIC_H_
#define CLERIC_H_


#include "hp.h"
#include "statBlock.h"
#include "levelSystem.h"

class cleric: public hp, public statBlock, public levelSystem {
public:

  static const hptype HPGROWTH=(hptype)5u;
  static const stattype STRGROWTH = (stattype) 1u;
  static const stattype INTGROWTH = (stattype) 2u;

  static const hptype BASEHP = (hptype) 14u;
  static const stattype BASESTR = (stattype)2u;
  static const stattype BASEINT = (stattype)3u;

  cleric():hp(BASEHP, BASEHP), statBlock(BASESTR, BASEINT){}

  std::string getClassName(){
    return "Cleric";
  }

private:
  void levelUp() override{
    setMaxHP(HPGROWTH + getMaxHP());
    incStats(STRGROWTH, INTGROWTH);
  }
};

#endif
