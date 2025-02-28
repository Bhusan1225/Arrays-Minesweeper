#pragma once
#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Cell/CellController.h"
#include <SFML/Graphics.hpp>



namespace Gameplay
{

    enum class GameResult
    {
        NONE,
        WON,
        LOST
    };
    using namespace Gameplay::Board;
    

    class GameplayController
    {
    private:
        const float max_level_duration = 301.0f;
        const float game_over_time = 11.f;
        GameResult game_result = GameResult::NONE;
        float remaining_time;
    public:
        GameplayController();
        ~GameplayController();

        void initialize();
        void update();
        void render();

        void restart();

        void gameWon();
        void gameLost();
      

        void updateRemainingTime();
        float getRemainingTime();
        int getMinesCount();
        void endGame(GameResult result);
    };
}


