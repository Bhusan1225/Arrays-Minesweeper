#pragma once
#include <sfml/Graphics.hpp>
#include "../../header/UI/UIElement/ButtonView.h"
namespace Gameplay
{
    namespace Cell
    {
        class CellView;
        class CellModel;
        enum class CellState;
        enum class CellType;
        enum class CellValue;

        class CellController
        {
        private:
            CellView* cell_view;
            CellModel* cell_model;

            void destroy();

        public:
            CellController(sf::Vector2i position);

            ~CellController();

            void initialize(float cell_width, float cell_height);
            void update();
            void render();




            CellState getCellState();
            CellValue getCellValue();

            void setCellState(CellState state);

            CellType getCellType();
            void setCellType(CellType type);

            sf::Vector2i getCellPosition();
            int getMinesAround();
            void openCell();
            void reset();
            bool canOpenCell();
            void flagCell();
            void cellButtonCallback(UI::UIElement::ButtonType button_type);
        
        };
    }
}