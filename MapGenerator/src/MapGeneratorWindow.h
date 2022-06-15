#pragma once

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <QBoxLayout>

#include "MapInformationWidget.h"
#include "MapSettingsWidget.h"
#include "MapView.h"

class MapGeneratorWindow : public QMainWindow
{
public:
	MapGeneratorWindow(const QSize& windowSize = DefaultWindowSize);
public:
	static constexpr QSize DefaultWindowSize{ 800, 800 };
	static constexpr QSize MinWindowSize{ 500, 500 };
private:
	QWidget* centralWidget = new QWidget(this);
	QVBoxLayout* mainLayout = new QVBoxLayout(centralWidget);
	MapSettingsWidget* mapSettings = new MapSettingsWidget(centralWidget);
	MapInformationWidget* mapInfo = new MapInformationWidget(centralWidget);
	MapView* mapView = new MapView(centralWidget);
};
