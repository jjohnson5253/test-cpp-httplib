#include <iostream>
#include <vector>
#include <string>
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"

using namespace std;

int main()
{
     // use endpoint from my infura account "https://mainnet.infura.io/v3/baf0fa2609d64e349473280a3d994200"
    string domain = "https://mainnet.infura.io";
    char endpoint[] = "/v3/baf0fa2609d64e349473280a3d994200"; // Post() requires C-style string as parameter
    
    // create request (would normally use json-rpc-cxx eventually to compile this)
    string request = "{\"id\":1,\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[]}";
    
    httplib::Client cli(domain);

    // get result after Posting
    auto result = cli.Post(endpoint, 
        request, 
        "application/json");

    cout << result->body << endl;
}