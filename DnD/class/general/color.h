#pragma once

class Color {
public:
    Color();
    Color(int red, int green, int blue, int alpha = 0);
    Color(char red, char green, char blue, char alpha = 0);

    char red() const;
    void setRed(char newRed);

    char green() const;
    void setGreen(char newGreen);

    char blue() const;
    void setBlue(char newBlue);

    char alpha() const;
    void setAlpha(char newAlpha);

private:
    char m_red;
    char m_green;
    char m_blue;
    char m_alpha;
};
