/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/home_screen/homeViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include "math.h"

struct zone
{
	//point 1 (counterclockwise first)
	float x1;
	float y1;

	//point 2 (counterclockwise second)
	float x2;
	float y2;

	uint16_t pulseWidth;

	int angle;
};


homeViewBase::homeViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    Background.setPosition(0, 0, 320, 240);
    Background.setColor(touchgfx::Color::getColorFromRGB(7, 3, 7));

    ORQA_logo.setBitmap(touchgfx::Bitmap(BITMAP_SONAR_LOGO2_ID));
    ORQA_logo.setPosition(23, 6, 80, 66);
    ORQA_logo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    Sonorqa.setXY(118, 27);
    Sonorqa.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Sonorqa.setLinespacing(0);
    Sonorqa.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G8D8));
/*
    radar_1.setPosition(0, 160, 80, 80);
    radar_1.setOrigin(0.000f, 0.000f);
    radar_1.setScale(1.000f, 1.000f);
    radar_1.setAngle(0.000f);
    radar_1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_1.setPainter(radar_1Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_1Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_1.setShape(radar_1Points);

    radar_2.setPosition(0, 160, 80, 80);
    radar_2.setOrigin(0.000f, 0.000f);
    radar_2.setScale(1.000f, 1.000f);
    radar_2.setAngle(0.000f);
    radar_2Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_2.setPainter(radar_2Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_2Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_2.setShape(radar_2Points);

    radar_3.setPosition(0, 160, 80, 80);
    radar_3.setOrigin(0.000f, 0.000f);
    radar_3.setScale(1.000f, 1.000f);
    radar_3.setAngle(0.000f);
    radar_3Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_3.setPainter(radar_3Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_3Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_3.setShape(radar_3Points);

    radar_4.setPosition(0, 160, 80, 80);
    radar_4.setOrigin(0.000f, 0.000f);
    radar_4.setScale(1.000f, 1.000f);
    radar_4.setAngle(0.000f);
    radar_4Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_4.setPainter(radar_4Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_4Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_4.setShape(radar_4Points);

    radar_5.setPosition(0, 160, 80, 80);
    radar_5.setOrigin(0.000f, 0.000f);
    radar_5.setScale(1.000f, 1.000f);
    radar_5.setAngle(0.000f);
    radar_5Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_5.setPainter(radar_5Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_5Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_5.setShape(radar_5Points);

    radar_6.setPosition(0, 160, 80, 80);
    radar_6.setOrigin(0.000f, 0.000f);
    radar_6.setScale(1.000f, 1.000f);
    radar_6.setAngle(0.000f);
    radar_6Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_6.setPainter(radar_6Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_6Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_6.setShape(radar_6Points);

    radar_7.setPosition(0, 160, 80, 80);
    radar_7.setOrigin(0.000f, 0.000f);
    radar_7.setScale(1.000f, 1.000f);
    radar_7.setAngle(0.000f);
    radar_7Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_7.setPainter(radar_7Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_7Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_7.setShape(radar_7Points);

    radar_8.setPosition(0, 160, 80, 80);
    radar_8.setOrigin(0.000f, 0.000f);
    radar_8.setScale(1.000f, 1.000f);
    radar_8.setAngle(0.000f);
    radar_8Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_8.setPainter(radar_8Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_8Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_8.setShape(radar_8Points);

    radar_9.setPosition(0, 160, 80, 80);
    radar_9.setOrigin(0.000f, 0.000f);
    radar_9.setScale(1.000f, 1.000f);
    radar_9.setAngle(0.000f);
    radar_9Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_9.setPainter(radar_9Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_9Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_9.setShape(radar_9Points);

    radar_10.setPosition(0, 160, 80, 80);
    radar_10.setOrigin(0.000f, 0.000f);
    radar_10.setScale(1.000f, 1.000f);
    radar_10.setAngle(0.000f);
    radar_10Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_10.setPainter(radar_10Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_10Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_10.setShape(radar_10Points);

    radar_11.setPosition(0, 160, 80, 80);
    radar_11.setOrigin(0.000f, 0.000f);
    radar_11.setScale(1.000f, 1.000f);
    radar_11.setAngle(0.000f);
    radar_11Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_11.setPainter(radar_11Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_11Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_11.setShape(radar_11Points);

    radar_12.setPosition(0, 160, 80, 80);
    radar_12.setOrigin(0.000f, 0.000f);
    radar_12.setScale(1.000f, 1.000f);
    radar_12.setAngle(0.000f);
    radar_12Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_12.setPainter(radar_12Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_12Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_12.setShape(radar_12Points);

    radar_13.setPosition(0, 160, 80, 80);
    radar_13.setOrigin(0.000f, 0.000f);
    radar_13.setScale(1.000f, 1.000f);
    radar_13.setAngle(0.000f);
    radar_13Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_13.setPainter(radar_13Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_13Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_13.setShape(radar_13Points);

    radar_14.setPosition(0, 160, 80, 80);
    radar_14.setOrigin(0.000f, 0.000f);
    radar_14.setScale(1.000f, 1.000f);
    radar_14.setAngle(0.000f);
    radar_14Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_14.setPainter(radar_14Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_14Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_14.setShape(radar_14Points);

    radar_15.setPosition(0, 160, 80, 80);
    radar_15.setOrigin(0.000f, 0.000f);
    radar_15.setScale(1.000f, 1.000f);
    radar_15.setAngle(0.000f);
    radar_15Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_15.setPainter(radar_15Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_15Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_15.setShape(radar_15Points);

    radar_16.setPosition(0, 160, 80, 80);
    radar_16.setOrigin(0.000f, 0.000f);
    radar_16.setScale(1.000f, 1.000f);
    radar_16.setAngle(0.000f);
    radar_16Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_16.setPainter(radar_16Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_16Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_16.setShape(radar_16Points);

    radar_17.setPosition(0, 160, 80, 80);
    radar_17.setOrigin(0.000f, 0.000f);
    radar_17.setScale(1.000f, 1.000f);
    radar_17.setAngle(0.000f);
    radar_17Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_17.setPainter(radar_17Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_17Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_17.setShape(radar_17Points);

    radar_18.setPosition(0, 160, 80, 80);
    radar_18.setOrigin(0.000f, 0.000f);
    radar_18.setScale(1.000f, 1.000f);
    radar_18.setAngle(0.000f);
    radar_18Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_18.setPainter(radar_18Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_18Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_18.setShape(radar_18Points);

    radar_19.setPosition(0, 160, 80, 80);
    radar_19.setOrigin(0.000f, 0.000f);
    radar_19.setScale(1.000f, 1.000f);
    radar_19.setAngle(0.000f);
    radar_19Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_19.setPainter(radar_19Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_19Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_19.setShape(radar_19Points);

    radar_20.setPosition(0, 160, 80, 80);
    radar_20.setOrigin(0.000f, 0.000f);
    radar_20.setScale(1.000f, 1.000f);
    radar_20.setAngle(0.000f);
    radar_20Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_20.setPainter(radar_20Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_20Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_20.setShape(radar_20Points);

    radar_21.setPosition(0, 160, 80, 80);
    radar_21.setOrigin(0.000f, 0.000f);
    radar_21.setScale(1.000f, 1.000f);
    radar_21.setAngle(0.000f);
    radar_21Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_21.setPainter(radar_21Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_21Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_21.setShape(radar_21Points);

    radar_22.setPosition(0, 160, 80, 80);
    radar_22.setOrigin(0.000f, 0.000f);
    radar_22.setScale(1.000f, 1.000f);
    radar_22.setAngle(0.000f);
    radar_22Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_22.setPainter(radar_22Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_22Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_22.setShape(radar_22Points);

    radar_23.setPosition(0, 160, 80, 80);
    radar_23.setOrigin(0.000f, 0.000f);
    radar_23.setScale(1.000f, 1.000f);
    radar_23.setAngle(0.000f);
    radar_23Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_23.setPainter(radar_23Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_23Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_23.setShape(radar_23Points);

    radar_24.setPosition(0, 160, 80, 80);
    radar_24.setOrigin(0.000f, 0.000f);
    radar_24.setScale(1.000f, 1.000f);
    radar_24.setAngle(0.000f);
    radar_24Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_24.setPainter(radar_24Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_24Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_24.setShape(radar_24Points);

    radar_25.setPosition(0, 160, 80, 80);
    radar_25.setOrigin(0.000f, 0.000f);
    radar_25.setScale(1.000f, 1.000f);
    radar_25.setAngle(0.000f);
    radar_25Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_25.setPainter(radar_25Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_25Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_25.setShape(radar_25Points);

    radar_26.setPosition(0, 160, 80, 80);
    radar_26.setOrigin(0.000f, 0.000f);
    radar_26.setScale(1.000f, 1.000f);
    radar_26.setAngle(0.000f);
    radar_26Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_26.setPainter(radar_26Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_26Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_26.setShape(radar_26Points);

    radar_27.setPosition(0, 160, 80, 80);
    radar_27.setOrigin(0.000f, 0.000f);
    radar_27.setScale(1.000f, 1.000f);
    radar_27.setAngle(0.000f);
    radar_27Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_27.setPainter(radar_27Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_27Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_27.setShape(radar_27Points);

    radar_28.setPosition(0, 160, 80, 80);
    radar_28.setOrigin(0.000f, 0.000f);
    radar_28.setScale(1.000f, 1.000f);
    radar_28.setAngle(0.000f);
    radar_28Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_28.setPainter(radar_28Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_28Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_28.setShape(radar_28Points);

    radar_29.setPosition(0, 160, 80, 80);
    radar_29.setOrigin(0.000f, 0.000f);
    radar_29.setScale(1.000f, 1.000f);
    radar_29.setAngle(0.000f);
    radar_29Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_29.setPainter(radar_29Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_29Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_29.setShape(radar_29Points);

    radar_30.setPosition(0, 160, 80, 80);
    radar_30.setOrigin(0.000f, 0.000f);
    radar_30.setScale(1.000f, 1.000f);
    radar_30.setAngle(0.000f);
    radar_30Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_30.setPainter(radar_30Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_30Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_30.setShape(radar_30Points);

    radar_31.setPosition(0, 160, 80, 80);
    radar_31.setOrigin(0.000f, 0.000f);
    radar_31.setScale(1.000f, 1.000f);
    radar_31.setAngle(0.000f);
    radar_31Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_31.setPainter(radar_31Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_31Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_31.setShape(radar_31Points);

    radar_32.setPosition(0, 160, 80, 80);
    radar_32.setOrigin(0.000f, 0.000f);
    radar_32.setScale(1.000f, 1.000f);
    radar_32.setAngle(0.000f);
    radar_32Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_32.setPainter(radar_32Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_32Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_32.setShape(radar_32Points);

    radar_33.setPosition(0, 160, 80, 80);
    radar_33.setOrigin(0.000f, 0.000f);
    radar_33.setScale(1.000f, 1.000f);
    radar_33.setAngle(0.000f);
    radar_33Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_33.setPainter(radar_33Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_33Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_33.setShape(radar_33Points);

    radar_34.setPosition(0, 160, 80, 80);
    radar_34.setOrigin(0.000f, 0.000f);
    radar_34.setScale(1.000f, 1.000f);
    radar_34.setAngle(0.000f);
    radar_34Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_34.setPainter(radar_34Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_34Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_34.setShape(radar_34Points);

    radar_35.setPosition(0, 160, 80, 80);
    radar_35.setOrigin(0.000f, 0.000f);
    radar_35.setScale(1.000f, 1.000f);
    radar_35.setAngle(0.000f);
    radar_35Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_35.setPainter(radar_35Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_35Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_35.setShape(radar_35Points);

    radar_36.setPosition(0, 160, 80, 80);
    radar_36.setOrigin(0.000f, 0.000f);
    radar_36.setScale(1.000f, 1.000f);
    radar_36.setAngle(0.000f);
    radar_36Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_36.setPainter(radar_36Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_36Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_36.setShape(radar_36Points);

    radar_37.setPosition(0, 160, 80, 80);
    radar_37.setOrigin(0.000f, 0.000f);
    radar_37.setScale(1.000f, 1.000f);
    radar_37.setAngle(0.000f);
    radar_37Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_37.setPainter(radar_37Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_37Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_37.setShape(radar_37Points);

    radar_38.setPosition(0, 160, 80, 80);
    radar_38.setOrigin(0.000f, 0.000f);
    radar_38.setScale(1.000f, 1.000f);
    radar_38.setAngle(0.000f);
    radar_38Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_38.setPainter(radar_38Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_38Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_38.setShape(radar_38Points);

    radar_39.setPosition(0, 160, 80, 80);
    radar_39.setOrigin(0.000f, 0.000f);
    radar_39.setScale(1.000f, 1.000f);
    radar_39.setAngle(0.000f);
    radar_39Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_39.setPainter(radar_39Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_39Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_39.setShape(radar_39Points);

    radar_40.setPosition(0, 160, 80, 80);
    radar_40.setOrigin(0.000f, 0.000f);
    radar_40.setScale(1.000f, 1.000f);
    radar_40.setAngle(0.000f);
    radar_40Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_40.setPainter(radar_40Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_40Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_40.setShape(radar_40Points);

    radar_41.setPosition(0, 160, 80, 80);
    radar_41.setOrigin(0.000f, 0.000f);
    radar_41.setScale(1.000f, 1.000f);
    radar_41.setAngle(0.000f);
    radar_41Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_41.setPainter(radar_41Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_41Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_41.setShape(radar_41Points);

    radar_42.setPosition(0, 160, 80, 80);
    radar_42.setOrigin(0.000f, 0.000f);
    radar_42.setScale(1.000f, 1.000f);
    radar_42.setAngle(0.000f);
    radar_42Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_42.setPainter(radar_42Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_42Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_42.setShape(radar_42Points);

    radar_43.setPosition(0, 160, 80, 80);
    radar_43.setOrigin(0.000f, 0.000f);
    radar_43.setScale(1.000f, 1.000f);
    radar_43.setAngle(0.000f);
    radar_43Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_43.setPainter(radar_43Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_43Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_43.setShape(radar_43Points);

    radar_44.setPosition(0, 160, 80, 80);
    radar_44.setOrigin(0.000f, 0.000f);
    radar_44.setScale(1.000f, 1.000f);
    radar_44.setAngle(0.000f);
    radar_44Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_44.setPainter(radar_44Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_44Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_44.setShape(radar_44Points);

    radar_45.setPosition(0, 160, 80, 80);
    radar_45.setOrigin(0.000f, 0.000f);
    radar_45.setScale(1.000f, 1.000f);
    radar_45.setAngle(0.000f);
    radar_45Painter.setColor(touchgfx::Color::getColorFromRGB(255, 221, 0));
    radar_45.setPainter(radar_45Painter);
    const touchgfx::AbstractShape::ShapePoint<float> radar_45Points[3] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f } };
    radar_45.setShape(radar_45Points);

*/
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

	struct zone zones[45];

	struct zone dummyZone;

	uint16_t pulse = 548;

	int currentAngle = 180;

	for(int x=1;x<=45;x++)
	{

		double currentAngle_rad = (double)currentAngle * 0.0174532925;

		dummyZone.x1 = (float)160+(160 * cos(currentAngle_rad));
		dummyZone.y1 = (float)240-(160 * sin(currentAngle_rad));

		double nextAngle_rad = (currentAngle-4) * 0.0174532925;
		dummyZone.x2 = (float)160+(160 * cos(nextAngle_rad ));
		dummyZone.y2 = (float)240-(160 * sin(nextAngle_rad));

		dummyZone.pulseWidth = pulse;
		pulse = pulse + 33;

		zones[x -1] = dummyZone;

		currentAngle=currentAngle - 4;

	    radars[x -1]->setPosition(0, 0, 320, 240);
	    radars[x -1]->setOrigin(0.000f, 0.000f);
	    radars[x -1]->setScale(1.000f, 1.000f);
	    radars[x -1]->setAngle(0.000f);
	    radarPainters[x -1]->setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
	    radars[x -1]->setPainter(*radarPainters[x -1]);
	    touchgfx::AbstractShape::ShapePoint<float> radarPoints[3] = {  { 160.000f, 240.000f },  { 160.000f, 240.000f }, { 160.000f, 240.000f } };
	    radars[x -1]->setShape(radarPoints);

	}

    legend_160.setPosition(0, 0, 320, 240);
    legend_160.setCenter(160, 240);
    legend_160.setRadius(160);
    legend_160.setLineWidth(1);
    legend_160.setArc(0, 360);
    legend_160.setCapPrecision(180);
    legend_160Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_160.setPainter(legend_160Painter);
    legend_160.setAlpha(120);

    legend_120.setPosition(0, 0, 320, 240);
    legend_120.setCenter(160, 240);
    legend_120.setRadius(120);
    legend_120.setLineWidth(1);
    legend_120.setArc(0, 360);
    legend_120.setCapPrecision(180);
    legend_120Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_120.setPainter(legend_120Painter);
    legend_120.setAlpha(120);

    legend_80.setPosition(0, 0, 320, 240);
    legend_80.setCenter(160, 240);
    legend_80.setRadius(80);
    legend_80.setLineWidth(1);
    legend_80.setArc(0, 360);
    legend_80.setCapPrecision(180);
    legend_80Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_80.setPainter(legend_80Painter);
    legend_80.setAlpha(120);

    legend_40.setPosition(0, 0, 320, 240);
    legend_40.setCenter(160, 240);
    legend_40.setRadius(40);
    legend_40.setLineWidth(1);
    legend_40.setArc(0, 360);
    legend_40.setCapPrecision(180);
    legend_40Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_40.setPainter(legend_40Painter);
    legend_40.setAlpha(120);

    legend_line1.setPosition(0, 0, 320, 240);
    legend_line1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_line1.setPainter(legend_line1Painter);
    legend_line1.setStart(160, 240);
    legend_line1.setEnd(48, 126);
    legend_line1.setLineWidth(1);
    legend_line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    legend_line1.setAlpha(120);

    legend_line2.setPosition(0, 0, 320, 240);
    legend_line2Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_line2.setPainter(legend_line2Painter);
    legend_line2.setStart(160, 240);
    legend_line2.setEnd(160, 80);
    legend_line2.setLineWidth(1);
    legend_line2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    legend_line2.setAlpha(120);

    legend_line3.setPosition(0, 0, 320, 240);
    legend_line3Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_line3.setPainter(legend_line3Painter);
    legend_line3.setStart(160, 240);
    legend_line3.setEnd(272, 126);
    legend_line3.setLineWidth(1);
    legend_line3.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    legend_line3.setAlpha(120);

    legend_100_box.setPosition(133, 72, 25, 16);
    legend_100_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    legend_100_text.setXY(134, 75);
    legend_100_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_100_text.setLinespacing(0);
    legend_100_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VQ5E));

    legend_75_box.setPosition(141, 115, 15, 12);
    legend_75_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    legend_75_text.setXY(141, 115);
    legend_75_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_75_text.setLinespacing(0);
    legend_75_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CLUJ));

    legend_50_box.setPosition(141, 155, 15, 12);
    legend_50_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    legend_50_text.setXY(141, 155);
    legend_50_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_50_text.setLinespacing(0);
    legend_50_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8CXO));

    legend_25_box.setPosition(141, 196, 15, 12);
    legend_25_box.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    legend_25_text.setXY(142, 197);
    legend_25_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_25_text.setLinespacing(0);
    legend_25_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X31J));

    legend_0_deg.setXY(162, 66);
    legend_0_deg.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_0_deg.setLinespacing(0);
    legend_0_deg.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YDHQ));

    legend_45_deg.setXY(276, 115);
    legend_45_deg.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_45_deg.setLinespacing(0);
    legend_45_deg.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Z63Z));

    legend_neg45_deg.setXY(23, 115);
    legend_neg45_deg.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    legend_neg45_deg.setLinespacing(0);
    legend_neg45_deg.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7K9X));

    add(__background);
    add(Background);
    add(ORQA_logo);
    add(Sonorqa);
    add(radar_1);
    add(radar_2);
    add(radar_3);
    add(radar_4);
    add(radar_5);
    add(radar_6);
    add(radar_7);
    add(radar_8);
    add(radar_9);
    add(radar_10);
    add(radar_11);
    add(radar_12);
    add(radar_13);
    add(radar_14);
    add(radar_15);
    add(radar_16);
    add(radar_17);
    add(radar_18);
    add(radar_19);
    add(radar_20);
    add(radar_21);
    add(radar_22);
    add(radar_23);
    add(radar_24);
    add(radar_25);
    add(radar_26);
    add(radar_27);
    add(radar_28);
    add(radar_29);
    add(radar_30);
    add(radar_31);
    add(radar_32);
    add(radar_33);
    add(radar_34);
    add(radar_35);
    add(radar_36);
    add(radar_37);
    add(radar_38);
    add(radar_39);
    add(radar_40);
    add(radar_41);
    add(radar_42);
    add(radar_43);
    add(radar_44);
    add(radar_45);
    add(legend_160);
    add(legend_120);
    add(legend_80);
    add(legend_40);
    add(legend_line1);
    add(legend_line2);
    add(legend_line3);
    add(legend_100_box);
    add(legend_100_text);
    add(legend_75_box);
    add(legend_75_text);
    add(legend_50_box);
    add(legend_50_text);
    add(legend_25_box);
    add(legend_25_text);
    add(legend_0_deg);
    add(legend_45_deg);
    add(legend_neg45_deg);
}

void homeViewBase::setupScreen()
{

}
