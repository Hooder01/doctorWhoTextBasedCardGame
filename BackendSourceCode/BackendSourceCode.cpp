#include <iostream>

class cardProperties
{
public: // can be called anywhere

    std::string playerCharacter;
    std::string foeCharacter;
    std::string characterInfo; // this will include any backstory for said character
    int healthPoints;
    float manaPoints;
    std::string characterSkill; // this will need to be more than just a string!

    cardProperties(std::string PChar, std::string FChar, std::string CInfo, int HP, double MP, std::string CSkill) // consructor that declares all the above attributes
    {
        this->playerCharacter = PChar;
        this->foeCharacter = FChar;
        this->characterInfo = CInfo;
        this->healthPoints = HP;
        this->manaPoints = MP;
        this->characterSkill = CSkill;
    }
    
    
};

class gameLogic : public cardProperties // drived child class of cardProperties
{
public:

    void Characters()
    {
        cardProperties charObj1("14th Doctor", "TEMP//is foe needed here?", "Old TimeLord", 90, 14.0, "Sonic Shelid: //TEMP");
    }
};





int main() // Game itself runs through here
{
    
}


