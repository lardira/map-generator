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
		return QColor{ 40, 72, 176, 220 }; //kinda dark blue
		break;
	case BlockType::CloseOcean:
		return QColor{ 15, 64, 224, 88 }; //kinda simple blue
		break;
	case BlockType::Sand:
		return QColor{ 224, 200, 38 }; //kinda yellow
		break;
	case BlockType::Ground:
		return QColor{ 4, 224, 117 }; //kinda green
		break;
	case BlockType::Hill:
		return QColor{ 120, 120, 120 };
		break;
	case BlockType::Mountain:
		return QColor{ 64, 64, 64 };
		break;
	default:
		return Qt::black;
		break;
	}
}