#ifndef ROGUE_H_
#define ROGUE_H_


#include "hp.h"
#include "statBlock.h"
#include "levelSystem.h"

class rogue: public hp, public statBlock, public levelSystem {
public:

  static const hptype HPGROWTH = (hptype) 4u;
  static const stattype STRGROWTH = (stattype) 1u;
  static const stattype INTGROWTH = (stattype) 1u;

  static const hptype BASEHP = (hptype) 13u;
  static const stattype BASESTR = (stattype)3u;
  static const stattype BASEINT = (stattype)2u;

  rogue():hp(BASEHP, BASEHP), statBlock(BASESTR, BASEINT){}

private:
  void levelUp() override{
    setMaxHP(HPGROWTH + getMaxHP());
    incStats(STRGROWTH, INTGROWTH);
  }
};

#endif
