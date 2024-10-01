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

class gameLogic : public cardProperties // drived child class of cardProperties
{
public:

    void Characters()
    {
        cardProperties charObj1("14th Doctor", "Old TimeLord", 90, 14.0, "Sonic Shelid: //TEMP");
        cardProperties charObj2("K9", "Sexy Robot Dog", 60, 26.0, "Tech Nose: //TEMP");

    }
};














void callingGLogic() // used for calling all classes and functions, this will be called in main!
{
    
}


int main() // Game itself runs through here
{
    
}


