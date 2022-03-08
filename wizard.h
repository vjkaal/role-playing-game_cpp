#ifndef WIZARD_H_
#define WIZARD_H_

#include "hp.h"
#include "statBlock.h"
#include "levelSystem.h"

class wizard: public hp, public statBlock, public levelSystem{
public:

  static const hptype HPGROWTH = (hptype) 3u;
  static const stattype STRGROWTH = (stattype) 1u;
  static const stattype INTGROWTH = (stattype) 2u;

  static const hptype BASEHP = (hptype) 9u;
  static const stattype BASESTR = (stattype)1u;
  static const stattype BASEINT = (stattype)4u;

  wizard():hp(BASEHP, BASEHP), statBlock(BASESTR, BASEINT){}

private:
  void levelUp() override{
    setMaxHP(HPGROWTH + getMaxHP());
    incStats(STRGROWTH, INTGROWTH);
  }
};

#endif
