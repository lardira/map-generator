#include <QApplication>
#include "MapGeneratorWindow.h"

int main(int argc, char** argv)
{
	QApplication* mapGenerator = new QApplication(argc, argv);

	MapGeneratorWindow* evoWindow = new MapGeneratorWindow();
	evoWindow->show();

	return mapGenerator->exec();
}