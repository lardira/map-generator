#include "MapGenerator.h"

MapGenerator::MapGenerator()
{
	ResizeData();
}

void MapGenerator::SetSize(size_t x, size_t y)
{
	size.setWidth(x);
	size.setHeight(y);
	ResizeData();
}

void MapGenerator::SetSize(const QSize& newSize)
{
	size = newSize;
	ResizeData();
}

const QSize& MapGenerator::GetSize() const
{
	return size;
}

void MapGenerator::ResizeData()
{
	data.resize(size.height());
	for (int i = 0; i < size.height(); i++)
		data[i].resize(size.width());
}