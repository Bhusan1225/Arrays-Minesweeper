#pragma once
#include <sfml/Graphics.hpp>

namespace Gameplay
{
    namespace Cell
    {
        enum class CellState
        {
            HIDDEN,
            OPEN,
            FLAGGED,
        };

        enum class CellValue
        {
            EMPTY,
            ONE,
            TWO,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            MINE,
        };

        class CellModel
        {
        private:
            CellState cell_state;
            CellValue cell_value;
            sf::Vector2i position;
          

        public:
            int cell_index;
            CellModel(int cell_index);
            ~CellModel();

            CellState getCellState();
            void setCellState(CellState state);

            int getCellIndex();
            CellValue getCellValue();
            void setCellValue(CellValue value);
            sf::Vector2i getCellPosition();
            void setCellPosition(sf::Vector2i grid_position);
            void reset();
        };
    }
}