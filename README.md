test-cpp-httplib
================

Test of the [cpp-httplib](https://github.com/yhirose/cpp-httplib) library. This will read the latest block number on Ethereum.

Dependencies
============
**Linux**
```sh
sudo apt-get install libssl-dev
```
**Windows**
 - Follow [MSYS2](https://www.msys2.org/) installation to get g++ compiler on windows
 - comment out the OS_WINDOWS macro in main.cpp

Usage
=======
**Linux**
```sh
g++ main.cpp -lcrypto -lssl
./a.out
```
**Windows**
```sh
g++ main.cpp -lwsock32 -lWs2_32 -lcrypt32 -lcrypto -lssl
a.exe
```
Should see a result like this:
```
{"jsonrpc":"2.0","id":1,"result":"0xd1369c"}
```
where "result" is the latest blocknumber on ethereum