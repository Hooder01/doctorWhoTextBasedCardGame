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
    
    void cardPlayerInfo() 
    {
        cardProperties playerObj1("10th Doctor", "900 year old TimeLord", 16, 15.6, "Born to run: Low level enemies will scatter in one hit!");
        cardProperties playObj2("Captain Jack", "The Guy with a plan", 15, 18.1, "Hey Ladies!: High chance to charm even bosses");
        cardProperties playObj3("K9", "Good Boy!", 12, 22.1, "Unit at 100%!: Can scan next wave of enemies");
    }
    
};

class cardGameLogic : public cardProperties 
{

    std::string userSelect;


    void PlayerChoice() 
    {
        std::cout << "Please select your character of choice (they can not be changed again until a round is over!)";
        
        std::cout << playerCharacter;

    }
};
    

int main() // Game itself runs through here
{
    
}


