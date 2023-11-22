#include <iostream>

#include "XMLProcessor.h"
#include "JsonAdapter.h"

int main() {
    std::string xml_info = "xml_info";
    XMLProcessor xml;
    xml.xml_process(xml_info);
    JsonAdapter json_adapter;
    json_adapter.xml_process(xml_info);
    return 0;
}