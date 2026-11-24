// cli.cpp — part of 4k-restorer.

#include "4krestorer/cli.h"

#include <cstdio>

namespace 4krestorer {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[4k-restorer] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace 4krestorer
