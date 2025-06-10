#pragma once
#include <chrono>
#include <mutex>

class RateLimiter {
public:
    RateLimiter(int max_requests, int window_sec);

    bool allow();

private:
    int max_requests_;
    int tokens_;
    int window_sec_;
    std::chrono::steady_clock::time_point last_refill_;
    std::mutex mutex_;
    void refill();
};