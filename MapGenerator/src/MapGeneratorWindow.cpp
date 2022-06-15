#include "MapGeneratorWindow.h"

MapGeneratorWindow::MapGeneratorWindow(const QSize& windowSize)
{
	setMinimumSize(MinWindowSize);
	resize(windowSize);

	centralWidget->setLayout(mainLayout);
	setCentralWidget(centralWidget);

	mainLayout->addWidget(mapSettings);
	mainLayout->addWidget(mapView);
	mainLayout->addWidget(mapInfo);
}
