#pragma once
#include "rate_limiter.h"
#include <httplib.h>
#include <map>
#include <string>

class Gateway {
public:
    Gateway(int port);
    void load_config(const std::string& path);
    void start();

private:
    int port_;
    httplib::Server server_;
    std::map<std::string, std::string> route_map_;
    std::map<std::string, RateLimiter> rate_limiters_;

    void setup_routes();
};