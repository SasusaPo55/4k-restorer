// upscale.cpp — part of 4k-restorer.

#include "4krestorer/upscale.h"

#include <cstdio>

namespace 4krestorer {

Upscale::Upscale(const std::string& config_path)
    : config_path_(config_path) {}

void Upscale::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Upscale::run() {
    if (verbose_) std::fprintf(stderr, "[4k-restorer] upscale: run\n");
    // core logic lives here
    return true;
}

}  // namespace 4krestorer
