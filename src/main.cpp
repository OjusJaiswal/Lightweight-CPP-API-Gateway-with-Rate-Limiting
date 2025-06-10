#include "gateway.h"

int main() {
    Gateway server(8080);
    server.load_config("config.json");
    server.start();
    return 0;
}