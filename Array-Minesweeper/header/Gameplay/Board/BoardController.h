#pragma once
#include <sfml/Graphics.hpp>

#include  "../../header/Gameplay/Cell/CellController.h"
#include "../../header/UI/UIElement/ButtonView.h"

//#include <random>




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
            
            int flagged_cell;
               int flagged_cells;
            //static const int  number_of_columns = 9;
            Cell::CellController* board[number_of_rows][number_of_colums];

            BoardController();
            ~BoardController();

            void initialize();
            void update();
            void render();
            void reset();

        public:
            BoardView* board_view;
            //Cell::CellController* cell;

            void createBoard();
            void deleteBoard();
            void destroy();
            void initializeCells();
           
            void resetBoard();
            void openCell(sf::Vector2i cell_position);
            int getMinesCount();
            void openCell();
            bool canOpenCell();
            void processCellInput(Cell::CellController* cell_controller, UI::UIElement::ButtonType button_type);
            void flagCell(sf::Vector2i cell_position);
        };
    }
}