#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <memory>

#include "SFML/Graphics.hpp"

#define LOGURU_WITH_STREAMS 1
#include "../core/logging/loguru.hpp"

class GameEngine
{
public:
    GameEngine(int argc, char* argv[]);

    void run();

private:
    std::shared_ptr<sf::RenderWindow> _mainWindow;

    sf::CircleShape shape;
};

#endif // GAMEENGINE_HPP
