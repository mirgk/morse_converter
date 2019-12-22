#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

namespace morse_converter {
    namespace gui {

        /*!
         * \brief Main window of the application
         *        Contains a text editor for user input and a read-only text output for displaying result.
         */
        class MainWindow : public QMainWindow
        {
            Q_OBJECT

        public:
            MainWindow(QWidget *parent = nullptr);
            ~MainWindow();

        private slots:
            void onTextChanged();

        private:
            Ui::MainWindow *ui;
        };
    }
}

#endif // MAINWINDOW_H
