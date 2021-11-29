test-cpp-httplib
================

Test of the [cpp-httplib](https://github.com/yhirose/cpp-httplib) library. This will read the latest block number on Ethereum.

Dependencies
============
**Linux**
```sh
sudo apt-get install libssl-dev
```

Usage
=======

```sh
g++ main.cpp -lcrypto -lssl
```

```sh
./a.out
```
Should see a result like this:
```
{"jsonrpc":"2.0","id":1,"result":"0xd1369c"}
```
where "result" is the latest blocknumber on ethereum