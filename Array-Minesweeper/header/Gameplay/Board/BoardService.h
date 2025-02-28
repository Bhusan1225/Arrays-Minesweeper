#pragma once
#include "../../header/Gameplay/Board/BoardController.h"
//#include "../../header/Gameplay/Cell/CellController.h"


namespace Gameplay
{
    //enum class GameResult;
    enum class BoardState;
    namespace Board
    {
        class BoardService
        {
        private:
            Board::BoardController* board_controller;

            void destroy();

        public:
            BoardService();
            ~BoardService();
            void initialize();
            void update();
            void render();
            int getMinesCount();
            void resetBoard();
            void processCellInput(CellController* cell_controller, UI::UIElement::ButtonType button_type);
            void setBoardState(BoardState state);
           BoardState getBoardState();
           void showBoard(); 

        };
    }
}