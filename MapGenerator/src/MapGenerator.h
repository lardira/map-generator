#pragma once

#include <vector>

#include <QSize>
#include <QDebug>

class MapGenerator
{
public:
	MapGenerator();

	void SetSize(size_t x, size_t y);
	void SetSize(const QSize& newSize);
	const QSize& GetSize() const;
private:
	void ResizeData();
private:
	static constexpr QSize defaultSize{ 100, 100 };
	QSize size{ defaultSize };
	std::vector<std::vector<float>> data;
};
