#include <iostream>
#include "spdlog/spdlog.h"

int main() {

    auto console_logger = spdlog::stdout_color_mt("console");
    auto file_logger = spdlog::basic_logger_mt("file_logger", "example.log");

    console_logger->info("This is an informational message.");
    console_logger->error("This is an error message.");











