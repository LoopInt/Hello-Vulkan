#include "Application.h"

int main()
{
    Application app;
    app.init();
    app.runLoop();
    app.clean();
    return 0;
}