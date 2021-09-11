#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(300, 80, 280, 910, sf::Color::Black)};
Rectangle* rectangle2{new Rectangle(250, 60, 305, 847, sf::Color::Black)};
Rectangle* rectangle3{new Rectangle(220, 60, 320, 784, sf::Color::Black)};
Rectangle* rectangle4{new Rectangle(200, 85, 330, 697, sf::Color::Black)};
Rectangle* rectangle5{new Rectangle(170, 55, 345, 640, sf::Color::Black)};
Rectangle* rectangle6{new Rectangle(140, 200, 361, 438, sf::Color::Black)};
Rectangle* rectangle7{new Rectangle(170, 55, 345, 381, sf::Color::Black)};
Rectangle* rectangle8{new Rectangle(220, 85, 320, 293, sf::Color::Black)};
Rectangle* rectangle9{new Rectangle(140, 150, 361, 140, sf::Color::Black)};
Rectangle* rectangle10{new Rectangle(75, 130, 395, 8, sf::Color::Black)};





Game::Game()
{
window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDHT, WINDOW_HEIGHT), GAME_NAME);
event = new sf::Event();
}

Game::~Game()
{
}

void Game::Start()
{

}

//Starting things
void Game::Initialize()
{
    Start();
    MainLoop();
}

//Logic, animations, etc.
void Game::update()
{

}

void Game::MainLoop()
{
while(window->isOpen())
{
    while(window->pollEvent(*event))
    {
        if(event->type == sf::Event::Closed)
        {
            window->close();
        }
    }
    Input();
    update();
    Render();
}
  Destroy();
}

void Game::Render()
{
    window->clear(sf::Color::Cyan);
    Draw();
    window->display();
}

//Drawing sprites or geometry.
void Game::Draw()
{
    window->draw(*rectangle->GetShape());
    window->draw(*rectangle2->GetShape());
    window->draw(*rectangle3->GetShape());
    window->draw(*rectangle4->GetShape());
    window->draw(*rectangle5->GetShape());
    window->draw(*rectangle6->GetShape());
    window->draw(*rectangle7->GetShape());
    window->draw(*rectangle8->GetShape());
    window->draw(*rectangle9->GetShape());
    window->draw(*rectangle10->GetShape());
}

//Keyboards, joysticks, etc.
void Game::Input()
{

}

void Game::Destroy()
{
    delete window;
    delete event;
}



/*
⠀⠀⠀⠀⠀⠀⠀⠀                     ⢀⣤⣤⣤⣤⠤⣄⣀⣀⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⡿⣋⣀⣙⣻⣿⣿⣿⣿⣿⣿⣿⣿⢿⣟⣯⣭⣿⣿⣶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⣹⣿⣿⣿⡿⣽⣿⣿⣿⣿⡿⠿⠛⠛⠟⠉⠿⠿⠿⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⣡⢠⣿⣿⣿⣿⣽⣿⣿⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢟⣴⠃⣸⣿⣿⣿⣿⣿⣟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⢣⣾⠃⣰⣿⣿⣿⣿⣿⠃⠈⢶⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⣠⣿⡇⣰⣿⣿⣿⣿⡿⠁⠀⠀⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠔⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠋⣰⣿⡿⣱⣿⣿⣿⣿⣿⠃⣠⣤⣶⣶⣶⣤⡙⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠞⠋⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⣷⣿⣿⡿⢱⣿⣿⣿⣿⣿⣯⣿⡿⢫⣽⣿⡭⡝⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⢻⣭⣶⣶⣦⣤⣀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⢻⠃⣾⣿⣿⣿⣿⣿⣿⡏⢰⣿⣿⣿⣧⣽⡆⠀⠀⠀⠀⠀⠀⠀⠀⢀⣽⣿⣿⣾⣯⡙⠿⣷⡄⠀⠀⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣸⣿⡟⣼⢰⣿⣿⣿⣿⣿⣿⣿⠀⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣇⣳⠀⠙⣿⡀⢰⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⣿⢸⣿⣿⣿⣿⡟⣼⠈⠀⢻⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⠀⠀⢻⡇⢠⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣻⢸⣿⣿⣿⡿⡿⠁⢀⢀⡈⢻⠿⠿⠟⠁⠀⢠⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⡟⠀⠀⠘⠁⠈⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣾⣿⣿⣿⢿⠋⡎⣟⣏⢳⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⡿⠿⠿⠋⠀⠀⠀⠀⠀⠀⣿⠟⡉⠉⠉⢿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⠀⠀⠈⠈⠀⠑⠀⣶⣦⣤⣤⣴⣶⣶⣤⣀⣀⣀⣀⣤⠀⢯⢯⢧⠹⣼⡄⠀⠀⠀⢘⣵⡟⠙⠻⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⠸⡆⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠈⠯⢳⠙⡜⠀⠀⠀⣾⣿⣷⡆⠀⢀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⠀⠻⣆⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⢀⡀⠻⠿⠛⣃⣴⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⠀⠀⠈⡿⣦⡀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⣠⣾⣷⣶⣾⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⡇⠀⢠⣷⣿⣿⣷⣤⣄⡈⠻⢿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⢀⣠⠾⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢧⠀⡏⣿⣿⣿⣿⣿⣿⡿⠓⢲⣯⣭⣉⣉⣉⣉⣀⣀⣀⣠⣤⣴⣖⡋⠁⠀⠙⢿⣿⣿⣿⣿⣿⣿⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣞⣷⣿⣿⣿⣿⣿⣿⡷⠚⢉⣿⣿⡟⣟⠉⠉⠉⠉⢰⣿⣿⡏⠛⠻⣦⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣼⣿⣿⣿⣿⣿⠛⡽⠁⠀⣿⣿⣿⠀⠘⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⢸⡄⠀⠀⠈⠛⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀*/