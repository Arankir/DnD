#include "color.h"

Color::Color(): Color(0, 0, 0, 0)
{
}

Color::Color(int a_red, int a_green, int a_blue, int a_alpha): m_red(a_red), m_green(a_green), m_blue(a_blue), m_alpha(a_alpha)
{
}

Color::Color(char a_red, char a_green, char a_blue, char a_alpha): m_red(a_red), m_green(a_green), m_blue(a_blue), m_alpha(a_alpha)
{
}

char Color::red() const
{
    return m_red;
}

void Color::setRed(char newRed)
{
    m_red = newRed;
}

char Color::green() const
{
    return m_green;
}

void Color::setGreen(char newGreen)
{
    m_green = newGreen;
}

char Color::blue() const
{
    return m_blue;
}

void Color::setBlue(char newBlue)
{
    m_blue = newBlue;
}

char Color::alpha() const
{
    return m_alpha;
}

void Color::setAlpha(char newAlpha)
{
    m_alpha = newAlpha;
}
