#include "../../header/Gameplay/GameplayService.h"

namespace Gameplay
{
	GameplayService::GameplayService()
	{
		gameplay_controller = nullptr;
		
	}

	GameplayService::~GameplayService()
	{
		destroy();
	}

	

	void GameplayService::initialize()
	{
		gameplay_controller = new GameplayController();
		gameplay_controller->initialize();
	}

	void GameplayService::update()
	{
		gameplay_controller->update();
	}

	void GameplayService::render()
	{
		gameplay_controller->render();
	}

	void GameplayService::startGame()
	{
		gameplay_controller->restart();
	}

	

	void GameplayService::destroy()
	{
		delete(gameplay_controller);
	}

	float GameplayService::getRemainingTime()
	{
		return gameplay_controller->getRemainingTime();
	}

	int GameplayService::getMinesCount()
	{


		return gameplay_controller->getMinesCount();
	}

	// This is part of the Gameplay Service layer that interacts with the GameplayController.
	void GameplayService::endGame(GameResult result)
	{
		// This function forwards the result of the game to the controller's endGame function.
		gameplay_controller->endGame(result); // Trigger the endGame logic in the controller.
	}
}