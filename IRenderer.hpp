#ifndef IRENDERER_HPP
#define IRENDERER_HPP

template <class Window>
class IRenderer
{
public:
    virtual bool initialize(Window&)=0;
    virtual void clear()=0;
    virtual void present()=0;
    virtual void drawRect(int, int, int, int, bool=false)=0;
};

#endif // IRENDERER_HPP