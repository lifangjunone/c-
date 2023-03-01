#include<pybind11.h>
#include<iostream>
#include<string.h>

namespace py = pybind11;


std::string print_param(std::string s)
{
    // std::cout << s << std::endl;
    return s;
}

PYBIND11_MODULE(api, m) 
{
    m.doc() = "pybind11 module";
    m.def("print_param", &print_param);
}
// sudo g++ api.cpp -fPIC -shared -o api.so -I 
// -I /usr/include/python3.7m/   -I  /usr/local/include/pybind11