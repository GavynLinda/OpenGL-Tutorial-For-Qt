#include "RedTriangle.hpp"
#include <QApplication>
#include <QSurfaceFormat>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    // Set support version to the highest globally
    QSurfaceFormat format;
    format.setMajorVersion(4);
    format.setMinorVersion(5);
    QSurfaceFormat::setDefaultFormat(format);

    QApplication a(argc, argv);
    RedTriangle w;
    int width = 500;
    int height = 500;
    // Move the window to the center of the screen
    w.setGeometry((QApplication::desktop()->availableGeometry().width() - width) / 2,
                  (QApplication::desktop()->availableGeometry().height() - height) / 2,
                  width, height);

    w.show();

    return a.exec();
}
