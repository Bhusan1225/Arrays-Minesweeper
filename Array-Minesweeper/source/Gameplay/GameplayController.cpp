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
    
}