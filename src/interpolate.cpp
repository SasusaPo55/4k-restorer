// interpolate.cpp — part of 4k-restorer.

#include "4krestorer/interpolate.h"

#include <cstdio>

namespace 4krestorer {

Interpolate::Interpolate(const std::string& config_path)
    : config_path_(config_path) {}

void Interpolate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Interpolate::run() {
    if (verbose_) std::fprintf(stderr, "[4k-restorer] interpolate: run\n");
    // core logic lives here
    return true;
}

}  // namespace 4krestorer
