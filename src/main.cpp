// main.cpp — entry point. Wires config and subsystems together.

#include "4krestorer/settings.h"
#include "4krestorer/upscale.h"
#include "4krestorer/interpolate.h"
#include "4krestorer/denoise.h"
#include "4krestorer/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    4krestorer::Settings settings = 4krestorer::Settings::load_default();
    4krestorer::Upscale upscale(settings.store_path);
    4krestorer::Interpolate interpolate(settings.store_path);
    4krestorer::Denoise denoise(settings.store_path);
    4krestorer::Cli cli(settings.store_path);
    std::fprintf(stderr, "[4k-restorer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
