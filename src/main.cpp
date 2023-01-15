#include <filesystem>
#include <fstream>

#include <matdash/minhook.hpp>
#include <matdash/boilerplate.hpp>
#include <matdash.hpp>
#include <gdhm.hpp>

#include "GDHMMain.hpp"
#include "mods.hpp"

void mod_main(HMODULE hModule) {
    if (gdhm::is_loaded()) {
        gdhm::gui::window (
            "Mod example", 
            "", 
            nullptr, 
            [](void) {}, 
            GDHMHeader,
            GDHMFooter
        );
    }
}
