#include <iostream>
#include <string>
#include <curl/curl.h>

size_t writeCallback(char *ptr, size_t size, size_t nmemb, std::string *userData) {
    userData->append(ptr, size * nmemb);
    return size * nmemb;
}

std::string fetchData(const std::string &symbol) {
    CURL *curl = curl_easy_init();
    std::string response;

    if (curl) {
        std::string url = "https://finance.yahoo.com/quote/" + symbol;

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            std::cerr << "cURL failed with error: " << curl_easy_strerror(res) << std::endl;
            response.clear();
        }
    }

    return response;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <symbol>" << std::endl;
        return 1;
    }

    std::string symbol = argv[1];
    std::string data = fetchData(symbol);

    if (!data.empty()) {
        std::cout << data << std::endl;
    }

    return 0;
}
