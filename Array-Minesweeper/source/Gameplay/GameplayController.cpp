#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Gameplay/Board/BoardService.h"
#include "../../header/Time/TimeService.h"
#include "../../header/Global/ServiceLocator.h"

namespace Gameplay
{
    using namespace Board;
    using namespace Global;
    using namespace Time;

    GameplayController::GameplayController() {}

    GameplayController::~GameplayController() {}

    void GameplayController::initialize() {}

    void GameplayController::update()
    {
        updateRemainingTime();
    }

    void GameplayController::render() {}

    

    void GameplayController::restart()
    {
        ServiceLocator::getInstance()->getBoardService()->resetBoard();
        
    }

    void GameplayController::updateRemainingTime()
    {
        remaining_time -= ServiceLocator::getInstance()->getTimeService()->getDeltaTime();
    }

    float GameplayController::getRemainingTime()
    {
        return remaining_time;
    }

    int GameplayController::getMinesCount() 
    {


        return ServiceLocator::getInstance()->getBoardService()->getMinesCount();
    }
    // This function is called to handle the end of a game session.
// It takes an enumerated type GameResult which indicates the outcome of the game.
    void GameplayController::endGame(GameResult result)
    {
        // The switch statement handles the different possible outcomes of the game.
        switch (result)
        {
            // In case the game is won, the gameWon() method is called.
        case GameResult::WON:
            gameWon();
            break;
            // In case the game is lost, the gameLost() method is called.
        case GameResult::LOST:
            gameLost();
            break;
            // The default case is not used here as all possible game outcomes should be WON or LOST.
        default:
            // No action is needed for default case.
            break;
        }
    }

    void GameplayController::gameLost()
    {
        // Implement game lost specific logic here.
    }

    // This function defines what should happen when the game is won.
// It corresponds to the "Game Won" path in the architecture.
    void GameplayController::gameWon()
    {
        // Implement game won specific logic here.
    }

   
}