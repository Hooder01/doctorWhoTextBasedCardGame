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

class storyMiniGames 
{
    public: void TARDISMini1() 
    {
        std::cout << "(You need to set the Void Sequencer between a number of 10 and 15!)";
        double voidSequence;
        double playerselect;
        int numberArray[4]{ 11, 12, 13, 14 };

        std::cout << "VOID SEQUENCER SET: "; std::cin >> playerselect;
        
        if (playerselect != numberArray[0]) 
        {
            std::cout << "\n\n'There we are..\n\n what was that all about old girl?'";
            std::cout << "\n\n\n(YOU WON Minigame)" << std::endl;
        }
        else 
        {
            std::cout << "no..\n\n that's not it" << std::endl; // try again message (needs a loop of sorts)
            std::cout << "\n\n\n(YOU LOST Minigame)" << std::endl;
        }
    }
};

class gameLogic
{
  public: float ExtraPoints = 0.0; // this is only used for timing and minigames! (this may need to placed outside this class)

    void battleSystem()
    {

    }

    void TDStory()
    {
        storyMiniGames storyCall;

        std::cout << "(The blue outshape of the TARDIS spins around and around inside of the space time vortex)" << std::endl;
        std::cout << "The Doctor (you) look at the TARDIS control panel with gloomy face \n\n\n you sigh loudly to yourself \n\n\n'I'm getting too old for this..'";
        std::cout << "you get back your focus and hit a switch (beep beep!) \n\n'that's odd..'  \n you crouch to the TARDIS scanner \n\n\n'the Void Sequencer needs reset?'\n\n" << std::endl;
        storyCall.TARDISMini1();

        std::cout << "\n\n\n\n\n(BANG BANG!!) sparks fly from the TARDIS console and you fall to the ground!";
        std::cout << "'THE KEY OF THE MARK HAS BEEN FOUND!' You stagger yourself up back to the console and see a black ghostly hooded figure\n\n 'how.. hello there!' you catch your words 'I don't believe we've had the plessure, I'm the Doctor'" << std::endl;
    }



  public: void onBeginPlay() // this is called into the main function first!
    {
      cardData charInfo1("Tenth Doctor", 14, 16.1);
      cardData charInfo2("K9", 12, 18.1);
      // can we make these two sepreate somehow?

      std::cout << "DOCTOR WHO: Mark Of The Vortex Ring\n\n\n";
        
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


