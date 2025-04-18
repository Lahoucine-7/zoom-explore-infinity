#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Fenêtre principale
    QWidget window;
    window.resize(800, 600);
    window.setWindowTitle("Z∞M – Explore Infinity");
    window.show();

    return app.exec();
}