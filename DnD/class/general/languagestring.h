#pragma once

#include <string>
#include <unordered_map>

class LanguageString {
public:
    enum Language {
        RU_ru,
        EN_us
    };

    LanguageString();
    std::string getText(Language);

private:
    std::unordered_map<Language, std::string> m_langs;
};
