// upscale — part of 4k-restorer.

#pragma once

#include <string>
#include <vector>

namespace 4krestorer {

class Upscale {
public:
    explicit Upscale(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace 4krestorer
