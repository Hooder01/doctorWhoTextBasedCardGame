#include <iostream>


class cardData 
{
    public:

    std::string characterName;
    int HP;
    double MP;
    
    void characterSkill() 
    {

    }

    cardData(std::string cn, int hp, double mp); // Constuctor declaration
};


cardData::cardData(std::string cn, int hp, double mp) // Constructor definition outside the class
{
    characterName = cn;
    HP = hp;
    MP = mp;
    // Acsess to these objects can be anywhere!

    
}

class gameLogic
{

    void battleSystem(){}

    void TDStory()
    {
        std::cout << "TEST TEST!!";
    }



  public: void onBeginPlay() // this is called into the main function first!
    {
      cardData charInfo1("Tenth Doctor", 14, 16.1);
      cardData charInfo2("K9", 12, 18.1);
      // can we make these two sepreate somehow?

      std::cout << "DOCTOR WHO: The Ten Rings Of Garcorndith";
        
      int userStorySelection; // will promt user to select a number for the characters story

      std::cout << "\n\nPlease Select Your Story!\n\n" << "\n\n1:" << charInfo1.characterName << "\n\n2:" << charInfo2.characterName;
        
      std::cin >> userStorySelection;

      if (userStorySelection == 1)
      {
          TDStory(); // calls for the Tenth Doctor Side of the story
      }
      else if (userStorySelection == 2)
      {
          std::cout << "IN PRODUCTION!"; // TEMP!
      }
    }

        
};

int main()
{
    gameLogic objTEMP;
    // THIS WILL ALL CHANGE!
    objTEMP.onBeginPlay();
}


