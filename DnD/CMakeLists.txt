cmake_minimum_required(VERSION 3.16)

project(DnD VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES DnD_ru_RU.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ${TS_FILES}
)

include_directories(
    ${CMAKE_SOURCE_DIR}/class
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DnD
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        class/network/networksendable.cpp class/network/networksendable.h
        class/item/inventoryitem.cpp class/item/inventoryitem.h
        class/item/itemrarity.cpp class/item/itemrarity.h
        class/general/color.cpp class/general/color.h
        class/general/image.cpp class/general/image.h
        class/general/languagestring.cpp class/general/languagestring.h
        class/entities/hero.cpp class/entities/hero.h
        class/entities/monster.cpp class/entities/monster.h
        class/entities/entityMembers/ability.cpp class/entities/entityMembers/ability.h
        class/entities/entityMembers/attribute.cpp class/entities/entityMembers/attribute.h
        class/entities/entityMembers/attributeexample.cpp class/entities/entityMembers/attributeexample.h
        class/entities/entityMembers/class.cpp class/entities/entityMembers/class.h
        class/entities/entityMembers/equipmentsystem.cpp class/entities/entityMembers/equipmentsystem.h
        class/entities/entityMembers/healtheffect.cpp class/entities/entityMembers/healtheffect.h
        class/entities/entityMembers/healtheffecttype.cpp class/entities/entityMembers/healtheffecttype.h
        class/entities/entityMembers/inventory.cpp class/entities/entityMembers/inventory.h
        class/entities/entityMembers/levelsystem.cpp class/entities/entityMembers/levelsystem.h
        class/entities/entityMembers/race.cpp class/entities/entityMembers/race.h
        class/entities/entityMembers/skill.cpp class/entities/entityMembers/skill.h
        class/entities/entityMembers/attributes/baseattribute.cpp class/entities/entityMembers/attributes/baseattribute.h
        class/entities/entityMembers/attributes/damageattribute.cpp class/entities/entityMembers/attributes/damageattribute.h
        class/entities/entityMembers/attributes/defenceattribute.cpp class/entities/entityMembers/attributes/defenceattribute.h
        class/entities/entityMembers/attributes/derivedattribute.cpp class/entities/entityMembers/attributes/derivedattribute.h
        class/entity.cpp class/entity.h
        class/game.cpp class/game.h
        class/map.cpp class/map.h
        class/quest.cpp class/quest.h
    )

# Define target properties for Android with Qt 6 as:
#    set_property(TARGET DnD APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(DnD SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(DnD
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(DnD PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.DnD)
endif()
set_target_properties(DnD PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS DnD
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(DnD)
endif()
