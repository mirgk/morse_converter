#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "morseconverter.h"

using namespace morse_converter::gui;
using namespace morse_converter::util;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->destinationTextEdit->setEnabled(false);

    MorseConverter::init();

    connect(ui->sourceTextEdit, SIGNAL(textChanged()), this, SLOT(onTextChanged()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTextChanged()
{
    ui->destinationTextEdit->setPlainText(MorseConverter::toMorseString(ui->sourceTextEdit->toPlainText()));
}

