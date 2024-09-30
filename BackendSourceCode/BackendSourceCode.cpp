#include <iostream>

class cardProperties
{
public: // can be called anywhere

    std::string playerCharacter;
    std::string foeCharacter;
    std::string characterInfo; // this will include any backstory for said character
    int healthPoints;
    double manaPoints;
    std::string characterSkill;

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

void Characters() // should this be another class!?
{

}

int main() // Game itself runs through here
{
    
}


