#pragma once
#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Cell/CellController.h"
#include <SFML/Graphics.hpp>



namespace Gameplay
{
    using namespace Gameplay::Board;
    

    class GameplayController
    {
   
       
    public:
        GameplayController();
        ~GameplayController();

        void initialize();
        void update();
        void render();

        void restart();
        
        
    };
}


