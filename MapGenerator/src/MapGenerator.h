#pragma once

#include <QSize>

class MapGenerator
{
public:
	MapGenerator();
	~MapGenerator();

	void SetSize(size_t x, size_t y);
	void SetSize(const QSize& newSize);
	const QSize& GetSize() const;
private:
	static constexpr QSize defaultSize{ 100, 100 };
	QSize size{ defaultSize };
	float** data;
};
