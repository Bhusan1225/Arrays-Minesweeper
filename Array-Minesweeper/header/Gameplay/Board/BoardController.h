#pragma once
#include <sfml/Graphics.hpp>

#include  "../../header/Gameplay/Cell/CellController.h"
#include "../../header/UI/UIElement/ButtonView.h"

#include <random>

namespace Gameplay
{
    using namespace Cell;

    namespace Board
    {
        
        class BoardView;

        class BoardController
        {

        enum class BoardState
         {
                FIRST_CELL,         // The state when the player opens first cell.
                PLAYING,           // The game is in progress.
                COMPLETED,        // The game is over.
         };


        public:
            static const int number_of_rows = 9;
            static const int number_of_colums = 9;
            static const int mines_count = 8;
            
          
            BoardState board_state;

            BoardState getBoardState();
            void setBoardState(BoardState state);

            int flagged_cell;
            int flagged_cells;
           
            Cell::CellController* board[number_of_rows][number_of_colums];
            
            std::default_random_engine random_engine;
            std::random_device random_device;
            
            BoardController();
            ~BoardController();

            void initialize();
            void update();
            void render();
            void reset();


            BoardView* board_view;
            //Cell::CellController* cell;

            void createBoard();
            void deleteBoard();
            void destroy();
            void initializeCells();
            

            void resetBoard();
            void openCell(sf::Vector2i cell_position);
            int getMinesCount();
            
            bool canOpenCell();


            void populateMines(sf::Vector2i cell_position);
            void populateBoard(sf::Vector2i cell_position);
            void populateCells();
            void openAllCells();

            void processCellInput(Cell::CellController* cell_controller, UI::UIElement::ButtonType button_type);
            int countMinesAround(sf::Vector2i cell_position);
            bool isValidCellPosition(sf::Vector2i cell_position);
            void processCellValue(sf::Vector2i cell_position);
            void flagCell(sf::Vector2i cell_position);
        };
    }
}