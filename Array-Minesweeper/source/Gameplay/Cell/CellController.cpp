#include "../../header/Gameplay/Cell/CellController.h"
#include "../../header/Gameplay/Cell/CellModel.h"
#include "../../header/Gameplay/Cell/CellView.h"
#include "../../header/Sound/SoundService.h"
#include "../../header/Global/ServiceLocator.h"

namespace Gameplay
{
	namespace Cell
	{
		using namespace Global;
		using namespace Sound;

		CellController::CellController(int cell_index)
		{
			cell_model = new CellModel(cell_index);
			cell_view = new CellView(this);
		}
		//... some other code
		
		void CellController::initialize(float cell_width, float cell_height)
		{
			cell_view->initialize(cell_width, cell_height);
		}


		CellState CellController::getCellState()
		{
			return cell_model->getCellState();
		}

		void CellController::render()
		{
			return cell_view->render();
		}

		CellValue CellController::getCellValue()
		{
			return cell_model->getCellValue();
		}

		sf::Vector2i CellController::getCellPosition()
		{
			return cell_model->getCellPosition();
		}

		int CellController::getCellIndex()
		{
			return cell_model->cell_index;
		}

		void CellController::reset()
		{
			cell_model->reset();
		}

		void CellController::destroy()
		{
			delete (cell_view);
			delete (cell_model);
		}
	}
}