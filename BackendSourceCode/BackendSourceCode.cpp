#include <iostream>

class cardProperties
{
public: // can be called anywhere

    std::string playerCharacter;
    
    std::string characterInfo; // this will include any backstory for said character
    int healthPoints;
    float manaPoints;
    std::string characterSkill; // this will need to be more than just a string!

    cardProperties(std::string PChar, std::string CInfo, int HP, float MP, std::string CSkill) // consructor that declares all the above attributes
    {
        this->playerCharacter = PChar;
        this->characterInfo = CInfo;
        this->healthPoints = HP;
        this->manaPoints = MP;
        this->characterSkill = CSkill;
    }
    
    
};

class callGameLogic
{
    public:

        void character() // should this method be a string?
        {
            cardProperties charObj("14th Doctor", "Old TimeLord", 60, 14.0, "Sonic Sheild: ");

            std::cout << charObj.playerCharacter;
        }

        void callingPlayerSelection()
        {
            std::cout << character;
        }
};
    

int main() // Game itself runs through here
{
    callGameLogic myclass;

    myclass.callingPlayerSelection();
}


