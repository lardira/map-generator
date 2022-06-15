#include "MapGenerator.h"

MapGenerator::MapGenerator()
{
}

MapGenerator::~MapGenerator()
{
	delete[] data;
}

void MapGenerator::SetSize(size_t x, size_t y)
{
	size.setWidth(x);
	size.setHeight(y);
}

void MapGenerator::SetSize(const QSize& newSize)
{
	size = newSize;
}

const QSize& MapGenerator::GetSize() const
{
	return size;
}
