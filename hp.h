#ifndef HP_H_
#define HP_H_

#include <cstdint>

typedef std::uint16_t hptype;

class hp{
public:

  hp(){
    currentHP=(hptype)1u;
    maxHP=(hptype)1u;
  }

  explicit hp(hptype cHP, hptype mHP){
    if(cHP>mHP) currentHP=mHP;
    else currentHP=cHP;
    maxHP=mHP;
  }

  bool setMaxHP(hptype new_maxHP){
    if(new_maxHP < 1) return false;
    maxHP = new_maxHP;
    if(currentHP > maxHP) currentHP = maxHP;
    return true;
  }

  hptype getMaxHP(){
    return maxHP;
  }

  void takeDMG(hptype dmg){
    if(dmg > currentHP){
      currentHP = 0;
      return;
    }
    currentHP -= dmg;
  }

  hptype getCurrentHP(){
    return currentHP;
  }

  void heal(hptype hp){
    if(hp + currentHP > maxHP){
      currentHP = maxHP;
      return;
    }
    maxHP += hp;
  }


private:
  // hptype shieldHP;
  hptype currentHP;
  hptype maxHP;
};


#endif
