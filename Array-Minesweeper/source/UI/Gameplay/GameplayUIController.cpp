#include "../../header/UI/Gameplay/GameplayUIController.h"
#include <sstream>
#include <iomanip>
namespace UI 
{
    using namespace UIElement;
    using namespace Global;


    namespace GameplayUI
    {
        GameplayUIController::GameplayUIController()
        {
            createTexts();
        }

        void GameplayUIController::createTexts()
        {
            mine_text = new TextView();
            time_text = new TextView();
        }

        void GameplayUIController::initialize()
        {
            initializeMineText();
            initializeTimeText();
        }

        void GameplayUIController::initializeTexts()
        {
            initializeTimeText();
        }

        void GameplayUIController::initializeTimeText()
        {
            time_text->initialize("000", sf::Vector2f(time_text_left_offset, time_text_top_offset), FontType::DS_DIGIB, font_size, text_color);
        }

        void GameplayUIController::show()
        {
            mine_text->show();
            time_text->show();
        }

        void GameplayUIController::update()
        {
            updateMineText();
            updateTimeText();
        }

        void GameplayUIController::render()
        {
            mine_text->render();
            time_text->render();
        }

        void GameplayUIController::updateTimeText()
        {
            int remaining_time = ServiceLocator::getInstance()->getGameplayService()->getRemainingTime();

            std::stringstream stream;
            stream << std::setw(3) << std::setfill('0') << remaining_time;
            std::string string_remaining_time = stream.str();

            time_text->setText(string_remaining_time);
            time_text->update();
        }

        void GameplayUIController::initializeMineText()
        {
            mine_text->initialize("000", sf::Vector2f(mine_text_left_offset, mine_text_top_offset), FontType::DS_DIGIB, font_size, text_color);
        }
        GameplayUIController::~GameplayUIController() 
        {
            // Cleanup if needed
        }
        void GameplayUIController::updateMineText()
        {
            int mines_count = ServiceLocator::getInstance()->getGameplayService()->getMinesCount();

            std::stringstream stream;
            stream << std::setw(3) << std::setfill('0') << mines_count;
            std::string string_mine_count = stream.str();

            mine_text->setText(string_mine_count);
            mine_text->update();
        }
    }
}

