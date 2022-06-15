#include "MapView.h"

MapView::MapView(QWidget* parent)
{
	setParent(parent);
	setScene(mapScene);

	mapScene->setBackgroundBrush(bgColor);
	//TODO:concurrent drawing on the qimage (map) and place it into the scene

	this->show();
}

QColor MapView::BlockTypeColor(const BlockType& type) const
{
	switch (type)
	{
	case BlockType::DeepOcean:
		return Qt::darkBlue;
		break;
	case BlockType::CloseOcean:
		return Qt::blue;
		break;
	case BlockType::Sand:
		return QColor{ 252, 206, 0 }; //kinda yellow
		break;
	case BlockType::Ground:
		return QColor{ 97, 255, 97 }; //kinda green
		break;
	case BlockType::Hill:
		return Qt::gray;
		break;
	case BlockType::Mountain:
		return Qt::darkGray;
		break;
	default:
		return Qt::black;
		break;
	}
}