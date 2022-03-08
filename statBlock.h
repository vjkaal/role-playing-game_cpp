#ifndef STATBLOCK_H_
#define STATBLOCK_H_

#include <cstdint>

typedef std::uint16_t stattype;

class statBlock{
private:
  stattype Strength;
  stattype Intellect;

public:
  statBlock(){
    Strength = (stattype) 1u;
    Intellect = (stattype) 1u;
  }

  explicit statBlock(stattype s, stattype i){
    Strength = s;
    Intellect = i;
  }

  stattype getStrength(){ return Strength; }
  stattype getIntellect(){ return Intellect; }

protected:
  void incStats(stattype s, stattype i){
    Strength += s;
    Intellect += i;
  }

};

#endif
