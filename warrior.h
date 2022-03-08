#ifndef WARRIOR_H_
#define WARRIOR_H_

#include "hp.h"
#include "statBlock.h"
#include "levelSystem.h"

class warrior: public hp, public statBlock, public levelSystem {
public:

  static const hptype HPGROWTH = (hptype)7u;
  static const stattype STRGROWTH = (stattype)2u;
  static const stattype INTGROWTH = (stattype)1u;

  static const stattype BASEHP = (stattype)19u;
  static const stattype BASESTR = (stattype)4u;
  static const stattype BASEINT = (stattype)1u;

  warrior():hp(BASEHP, BASEHP), statBlock(BASESTR, BASEINT){}

private:
  void levelUp() override{
    setMaxHP(HPGROWTH + getMaxHP());
    incStats(STRGROWTH, INTGROWTH);
  }
};

#endif
