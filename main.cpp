#include<iostream>

#include"allClasses.h"

int main()
{
  warrior war1;
  wizard wiz1;
  cleric cle1;
  rogue rog1;

  // std::cout<<"Warrior\n"
  // <<"- MaxHP: "<<war1.getMaxHP()<<'\n'
  // <<"- Strength: "<<war1.getStrength()<<'\n'
  // <<"- Intellect: "<<war1.getIntellect()<<'\n';
  //
  // std::cout<<"Wizard\n"
  // <<"- MaxHP: "<<wiz1.getMaxHP()<<'\n'
  // <<"- Strength: "<<wiz1.getStrength()<<'\n'
  // <<"- Intellect: "<<wiz1.getIntellect()<<'\n';
  //
  // std::cout<<"Cleric\n"
  // <<"- MaxHP: "<<cle1.getMaxHP()<<'\n'
  // <<"- Strength: "<<cle1.getStrength()<<'\n'
  // <<"- Intellect: "<<cle1.getIntellect()<<'\n';
  //
  // std::cout<<"Rogue\n"
  // <<"- MaxHP: "<<rog1.getMaxHP()<<'\n'
  // <<"- Strength: "<<rog1.getStrength()<<'\n'
  // <<"- Intellect: "<<rog1.getIntellect()<<'\n';


  std::cout << "\n\nleveling up\n" << '\n';
  for(int i=0;i<11;i++){
    std::cout<<"Cleric Level: "<<cle1.getLevel()<<'\n'
    <<"- MaxHP: "<<cle1.getMaxHP()<<'\n'
    <<"- Strength: "<<cle1.getStrength()<<'\n'
    <<"- Intellect: "<<cle1.getIntellect()<<'\n'
    <<"- Exp: "<<cle1.getCurrExp()<<'/'<<cle1.getXPToNxtLvl()<<'\n';

    cle1.gainExp(100u);
  }

  // std::cout<<"Wizard\n - MaxHP: "<<wiz1.getMaxHP();
  // std::cout<<"Cleric\n - MaxHP: "<<cle1.getMaxHP();
  // std::cout<<"Rogue\n - MaxHP: "<<rog1.getMaxHP();


  return 0;
}
