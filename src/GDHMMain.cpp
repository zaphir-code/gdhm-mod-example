#include <fstream>

#include <gdhm.hpp>
#include <cocos2d.h>

#include "mods.hpp"

#define CHECKBOX(name, value, onActivate) \
    gdhm::gui::checkbox ( \
        gdhm::new_id, \
        name, \
        value, \
        nullptr, \
        onActivate, \
        "", \
        onActivate \
    )

void GDHMHeader(void) {
    CHECKBOX("Toogle", &mods::toogle, [](void) {});
}

void GDHMFooter(void) {
    gdhm::gui::label("");
    gdhm::gui::label("Example");
}
