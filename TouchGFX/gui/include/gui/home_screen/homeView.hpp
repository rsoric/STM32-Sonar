#ifndef HOMEVIEW_HPP
#define HOMEVIEW_HPP

#include <gui_generated/home_screen/homeViewBase.hpp>
#include <gui/home_screen/homePresenter.hpp>

class homeView : public homeViewBase
{
public:
    homeView();
    virtual ~homeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
};

#endif // HOMEVIEW_HPP
