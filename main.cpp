#include <iostream>
#include <vector>
#include <string>
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    std::string url = "https://mainnet.infura.io/v3/baf0fa2609d64e349473280a3d994200";

    std::string domain = "https://mainnet.infura.io";
    std::string path = "/v3/9aa3d95b3bc440fa88ea12eaa4456161/jsonrpc";
    std::string request = "{\"id\":0,\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[]}";
    
    httplib::Client cli(domain);
    //httplib::Client cli(url);

    /*auto result = cli.Post("/v3/9aa3d95b3bc440fa88ea12eaa4456161/jsonrpc", 
        "{\"id\":1,\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[]}", 
        "application/json");*/

    auto result = cli.Post("/v3/baf0fa2609d64e349473280a3d994200", 
        "{\"id\":1,\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[]}", 
        "application/json");

    cout << result->body;
}