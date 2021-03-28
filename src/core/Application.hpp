#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <memory>

#include "../engine/GameEngine.hpp"

class Application
{
public:
    Application();

    void init(int argc, char *argv[]);

private:
    std::shared_ptr<GameEngine> _engine;
};

#endif // APPLICATION_HPP
