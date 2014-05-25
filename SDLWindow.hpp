#ifndef SDLWINDOW_HPP
#define SDLWINDOW_HPP

#include "Global.hpp"
#include <string>
#include <IWindow.hpp>

struct SDL_Window;
class SDLWindow : public IWindow<SDL_Window>
{
public:
    SDLWindow();
    ~SDLWindow();

    bool initialize();

    void setTitle(const std::string& title);
    std::string title() const;

    SDL_Window* handle() const;
private:
    SDL_Window* m_window;
};

#endif // SDLWINDOW_HPP
