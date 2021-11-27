#include <gui/home_screen/homeView.hpp>
#include "HCSR04.h"
#include <gui_generated/home_screen/homeViewBase.hpp>
#include "math.h"
#include <touchgfx/Color.hpp>
#include <touchgfx/widgets/canvas/Shape.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include "main.h"

extern HCSR04 sensor;
extern int measuringComplete;
extern int currentZoneIndex;
extern measurementZone zones[45];

homeView::homeView()
{

}

void homeView::setupScreen()
{
    homeViewBase::setupScreen();
}

void homeView::tearDownScreen()
{
    homeViewBase::tearDownScreen();
}

void homeView::handleTickEvent() {

	touchgfx::Shape<3> * radars [45] {
		&radar_1,
		&radar_2,
		&radar_3,
		&radar_4,
		&radar_5,
		&radar_6,
		&radar_7,
		&radar_8,
		&radar_9,
		&radar_10,
		&radar_11,
		&radar_12,
		&radar_13,
		&radar_14,
		&radar_15,
		&radar_16,
		&radar_17,
		&radar_18,
		&radar_19,
		&radar_20,
		&radar_21,
		&radar_22,
		&radar_23,
		&radar_24,
		&radar_25,
		&radar_26,
		&radar_27,
		&radar_28,
		&radar_29,
		&radar_30,
		&radar_31,
		&radar_32,
		&radar_33,
		&radar_34,
		&radar_35,
		&radar_36,
		&radar_37,
		&radar_38,
		&radar_39,
		&radar_40,
		&radar_41,
		&radar_42,
		&radar_43,
		&radar_44,
		&radar_45
	};

	touchgfx::PainterRGB565 * radarPainters[45]{
		&radar_1Painter,
		&radar_2Painter,
		&radar_3Painter,
		&radar_4Painter,
		&radar_5Painter,
		&radar_6Painter,
		&radar_7Painter,
		&radar_8Painter,
		&radar_9Painter,
		&radar_10Painter,
		&radar_11Painter,
		&radar_12Painter,
		&radar_13Painter,
		&radar_14Painter,
		&radar_15Painter,
		&radar_16Painter,
		&radar_17Painter,
		&radar_18Painter,
		&radar_19Painter,
		&radar_20Painter,
		&radar_21Painter,
		&radar_22Painter,
		&radar_23Painter,
		&radar_24Painter,
		&radar_25Painter,
		&radar_26Painter,
		&radar_27Painter,
		&radar_28Painter,
		&radar_29Painter,
		&radar_30Painter,
		&radar_31Painter,
		&radar_32Painter,
		&radar_33Painter,
		&radar_34Painter,
		&radar_35Painter,
		&radar_36Painter,
		&radar_37Painter,
		&radar_38Painter,
		&radar_39Painter,
		&radar_40Painter,
		&radar_41Painter,
		&radar_42Painter,
		&radar_43Painter,
		&radar_44Painter,
		&radar_45Painter
	};

	for (int i = 0; i <= 44; i++)
	{
		if (zones[i].hasBeenDrawn == 0)
		{
			double currentAngle =  180 - i * (4);
			double currentAngle_rad = currentAngle * 0.0174532925;

			float distance = zones[i].distance;
			if (distance > 100)
				distance = 100;
			distance = distance * 1.6;

			float x1 = (float) 160 + (distance * cos(currentAngle_rad));
			float y1 = (float) 240 - (distance * sin(currentAngle_rad));

			double nextAngle_rad = (currentAngle - 4) * 0.0174532925;
			float x2 = (float) 160 + (distance * cos(nextAngle_rad));
			float y2 = (float) 240 - (distance * sin(nextAngle_rad));

			touchgfx::AbstractShape::ShapePoint<float> radarPoints[3] =
			{ { x2, y2 }, { x1, y1 }, { 160.000f, 240.000f } };
			radars[i]->setShape(radarPoints);
			radarPainters[i]->setColor(
			touchgfx::Color::getColorFromRGB(255, distance, 0));
			radars[i]->updateAbstractShapeCache();
			radars[i]->invalidate();
			zones[i].hasBeenDrawn = 1;

		}
	}

	homeView::getRootContainer().invalidate();
}
