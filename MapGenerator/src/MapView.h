#pragma once

#include <memory>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QColor>
#include <QGraphicsItem>

#include "MapGenerator.h"

enum class BlockType
{
	Void = 0,
	DeepOcean = 1,
	CloseOcean = 2,
	Sand = 3,
	Ground = 4,
	Hill = 5,
	Mountain = 6,
};

class MapView : public QGraphicsView
{
public:
	MapView(QWidget* parent = nullptr);
private:
	QColor BlockTypeColor(const BlockType& type) const;
private:
	const QColor bgColor = Qt::lightGray;

	std::unique_ptr<MapGenerator> mapGenerator;
	QGraphicsScene* mapScene = new QGraphicsScene();
	QImage map;
};

