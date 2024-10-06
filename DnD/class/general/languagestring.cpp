#include "languagestring.h"

LanguageString::LanguageString()
{
}

std::string LanguageString::getText(Language a_lang)
{
    return m_langs[a_lang];
}
