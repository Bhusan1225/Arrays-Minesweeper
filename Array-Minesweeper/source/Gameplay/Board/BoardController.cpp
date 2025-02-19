#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"
#include "../../header/Gameplay/Cell/CellController.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;

		BoardController::BoardController()
		{
			board_view = new BoardView(this);
			createBoard();
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		void BoardController::createBoard()
		{
			cell = new CellController(); //the problem is here,  no position set, no papameteer passed ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}
		
		void BoardController::initialize()
		{
			float cell_width = board_view->GetCellWidth();
			float cell_height = board_view->GetCellHeight();
			board_view->initialize();
			cell->initialize();
		}

		void BoardController::update()
		{
			board_view->update();
		}

		void BoardController::render()
		{
			board_view->render(); 
			cell->render();
		}

		void BoardController::reset()
		{
			//Yet to implement
		}

		void BoardController::deleteBoard()
		{
			//Yet to implement
		}

		void BoardController::destroy()
		{
			delete(board_view);
		}
	}

	
}