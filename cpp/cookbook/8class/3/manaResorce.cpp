#include <iostream>
#include <string>
#include <memory> // For smart pointers

using namespace std;

class Socket {
public:
    Socket(const string& hostname) {
        // In a real implementation, you would connect to the hostname here
        cout << "Socket created for hostname: " << hostname << endl;
    }

    void send(const string& message) {
        // In a real implementation, you would send the message over the socket here
        cout << "Sending message: " << message << endl;
    }
};

class HttpRequest {
private:
    unique_ptr<Socket> sock_; // Use unique_ptr to manage Socket

public:
    HttpRequest(const string& hostname)
        : sock_(make_unique<Socket>(hostname)) {}

    void send(const string& soapMsg) {
        sock_->send(soapMsg);
    }
};

void sendMyData(const string& soapMsg, const string& host) {
    HttpRequest req(host);
    req.send(soapMsg); // Send the data via the HttpRequest
}

int main() {
    string s = "xml";
    sendMyData(s, "www.oreilly.com");
    return 0;
}
