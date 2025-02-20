#pragma once
#include <sfml/Graphics.hpp>

#include  "../../header/Gameplay/Cell/CellController.h"
#include "../../header/UI/UIElement/ButtonView.h"






namespace Gameplay
{
    using namespace Cell;

    namespace Board
    {
        
        class BoardView;

        class BoardController
        {
        public:
            static const int number_of_rows = 9;
            static const int number_of_colums = 9;
            static const int mines_count = 8;


            static const int  number_of_columns = 9;
            Cell::CellController* cells[number_of_columns];

            BoardController();
            ~BoardController();

            void initialize();
            void update();
            void render();
            void reset();

        private:
            BoardView* board_view;
            //Cell::CellController* cell;

            void createBoard();
            void deleteBoard();
            void destroy();


            void initializeCells();
        };
    }
}