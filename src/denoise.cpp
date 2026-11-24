// denoise.cpp — part of 4k-restorer.

#include "4krestorer/denoise.h"

#include <cstdio>

namespace 4krestorer {

Denoise::Denoise(const std::string& config_path)
    : config_path_(config_path) {}

void Denoise::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Denoise::run() {
    if (verbose_) std::fprintf(stderr, "[4k-restorer] denoise: run\n");
    // core logic lives here
    return true;
}

}  // namespace 4krestorer
