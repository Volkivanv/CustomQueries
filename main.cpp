#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main() {
    std::string request;
    std::cout<<"Input your request 'get', 'post', 'put', 'delete', 'patch' or 'ext'"<<std::endl;
    std::cin>>request;
    while(request!="ext") {
        if(request == "get") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text << std::endl;
        } else if(request == "post"){
            cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"));
            std::cout << r.text << std::endl;
        } else if(request == "delete"){
            cpr::Response r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text << std::endl;
        } else if(request == "patch"){
            cpr::Response r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text << std::endl;
        } else if(request == "put"){
            cpr::Response r = cpr::Put(cpr::Url("http://httpbin.org/put"));
            std::cout << r.text << std::endl;
        }
        std::cout<<"Input your request 'get', 'post', 'put', 'delete', 'patch' or 'ext'"<<std::endl;
        std::cin>>request;
    }

    return 0;
}
