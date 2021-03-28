#include "GameEngine.hpp"

GameEngine::GameEngine(int argc, char *argv[]) :
    _mainWindow(nullptr),
    shape(100.f)
{
    loguru::init(argc, argv);
    LOG_SCOPE_FUNCTION(INFO);

    _mainWindow.reset(new sf::RenderWindow(sf::VideoMode(500, 500), "Yo, Knoke!"));
}

void GameEngine::run()
{
    while(_mainWindow->isOpen())
    {
        sf::Event event;
        while(_mainWindow->pollEvent(event))
        {
            if(event.type == sf::Event::Resized)
            {
                //LOG_S(INFO) << "New window size: " << event.size.width << "x" << event.size.height;
                LOG_F(INFO, "Hier, Hallo logger!");
            }
            if(event.type == sf::Event::Closed)
            {
                _mainWindow->close();
            }
        }

        _mainWindow->clear();
        _mainWindow->draw(shape);
        _mainWindow->display();
    }
}
