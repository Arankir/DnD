#pragma once

#include "entities/entityMembers/attribute.h"

// Сила (Strength, STR) — физическая мощь и способность поднимать тяжести, наносить урон в ближнем бою.
// Ловкость (Dexterity, DEX) — координация, быстрота, уклонение от атак, влияет на точность стрельбы.
// Телосложение (Constitution, CON) — стойкость, влияет на здоровье и устойчивость к болезням и ядам.
// Интеллект (Intelligence, INT) — когнитивные способности, магические знания, решение головоломок.
// Мудрость (Wisdom, WIS) — интуиция, восприятие мира, способность к лечению, защита от магии.
// Харизма (Charisma, CHA) — социальные навыки, способность убеждать, лидерство, взаимодействие с NPC.
// Знание магии (Arcana) — знание магических ритуалов, артефактов и заклинаний.
// Атлетика (Athletics) — физические навыки, такие как бег, прыжки, подъем по скалам.
// Скрытность (Stealth) — способность скрываться от врагов, избегать обнаружения.
// Акробатика (Acrobatics) — выполнение сложных физических маневров, таких как сальто или прыжки.
// Обман (Deception) — способность лгать и вводить в заблуждение.
// Проницательность (Insight) — способность оценивать намерения других персонажей и понимать их мотивы.
// Запугивание (Intimidation) — способность угрожать другим и добиваться своих целей через страх.
// Убеждение (Persuasion) — способность убеждать других в своих намерениях или взглядах.
// Выживание (Survival) — навыки, позволяющие выживать в диких условиях, охотиться и находить воду.
// Лечение (Medicine) — способность лечить раны, останавливать кровотечения или противостоять ядам.
// История (History) — знание о событиях прошлого, древних цивилизациях и культурах.
// Религия (Religion) — знание о богах, культах и ритуалах.
// Восприятие (Perception) — способность замечать детали в окружающей среде, важна для обнаружения скрытых объектов и врагов.
// Анализ (Investigation) — способность находить скрытые улики и разгадывать загадки.
// Мораль (Morale) — уровень мотивации и решимости персонажа в трудных ситуациях.
// Репутация (Reputation) — общественное мнение о персонаже в мире игры, влияет на взаимодействие с NPC.
class BaseAttribute : public Attribute
{
public:
    BaseAttribute();
};
