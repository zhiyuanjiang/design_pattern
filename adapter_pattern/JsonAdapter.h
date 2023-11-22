#pragma once
#include <memory>

#include "XMLProcessor.h"
#include "JSONProcessor.h"

class JsonAdapter : public XMLProcessor {
public:
    JsonAdapter() {
        _json_processor = std::make_shared<JSONProcessor>();
    }

    void xml_process(const std::string& xml){
        std::string json = to_json(xml);
        if(_json_processor){
            _json_processor->json_process(json);
        }
    }

    std::string to_json(const std::string& xml) {
        std::cout << "xml to json" << std::endl;
        return xml + "_json";
    }

private:
    std::shared_ptr<JSONProcessor> _json_processor = nullptr;
};