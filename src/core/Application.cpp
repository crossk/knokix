#include "Application.hpp"

Application::Application() :
    _engine()
{
}

void Application::init(int argc, char* argv[])
{
    _engine.reset(new GameEngine(argc, argv));

    _engine->run();
}
