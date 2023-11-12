#include <iostream>
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>

int main() {
try {
        Poco::URI uri("http://www.example.com");
        Poco::Net::HTTPClientSession session(uri.getHost(), uri.getPort());
        Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_GET, uri.getPath());
        session.sendRequest(request);

        Poco::Net::HTTPResponse response;
        std::istream& responseStream = session.receiveResponse(response);

        std::cout << "Response Status Code: " << response.getStatus() << " " << response.getReason() << std::endl;

        Poco::StreamCopier::copyStream(responseStream, std::cout);
    } catch (Poco::Exception& ex) {
        std::cerr << "Poco Exception: " << ex.displayText() << std::endl;
}

    return 0;













