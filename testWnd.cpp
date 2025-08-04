#include "testWnd.h"
#include "wndForm.h"

void makeCircle(CircleShape& obj, RenderWindow& window)
{
	obj.setRadius(static_cast<float>(std::rand() % 21 + 20)); // size of circle = 20-40
	obj.setPosition(
		static_cast<float>(std::rand() % window.getSize().x),
		static_cast<float>(std::rand() % window.getSize().y)
	);
	obj.setFillColor(Color(std::rand() % 256, std::rand() % 256, std::rand() % 256));
}

void moveCircle(CircleShape& obj, RenderWindow& window)
{
	obj.setPosition(
		static_cast<float>(std::rand() % window.getSize().x),
		static_cast<float>(std::rand() % window.getSize().y)
	);
}

void delayWhile(int% coefLoad)
{
	LARGE_INTEGER freg, startTime, currentTime;
	QueryPerformanceFrequency(&freg);

	// delay for while, targetDelay (ns), range in (0 - 1000000)
	double targetDelay[10] = {
		1000000.0, 70000.0, 20000.0, 10000.0, 5000.0, 2500.0, 1200.0, 600.0, 300.0, 100.0 
	};

	double coef = 1000000;
	double ticks_per_ms = static_cast<double>(freg.QuadPart) / coef;
	UINT64 wait_ticks = static_cast<UINT64>(targetDelay[coefLoad] * ticks_per_ms);

	QueryPerformanceCounter(&startTime);

	do
	{
		QueryPerformanceCounter(&currentTime);
	} while ((currentTime.QuadPart - startTime.QuadPart) < wait_ticks);
}

void startTest(bool% isDoing, int width, int height, int cntElem, int% coefLoad)
{
	std::srand(std::time(nullptr));

	RenderWindow window(VideoMode(width, height), "test");

	const size_t numCircles = cntElem; // 10 is the best for max loading GPU
	std::vector<CircleShape> circles(numCircles);

	for (auto& circle : circles)
	{
		makeCircle(circle, window);
	}

	while (window.isOpen() && isDoing)
	{
		Event event;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed ||
				(event.type == Event::KeyPressed && event.key.code == Keyboard::Escape))
			{
				window.close();
			}
		}
		
		window.clear();

		for (auto& circle : circles)
		{
			moveCircle(circle, window);
			window.draw(circle);
		}

		window.display();

		if (coefLoad != 10)
		{
			delayWhile(coefLoad);
		}
	}
}