#pragma once
#include "law_suit.h"

#include <memory>

class ProxyLawyer : public LawSuit {
public:
    ProxyLawyer(std::shared_ptr<LawSuit> law_suit) : _law_suit(law_suit) {}

    void submit(std::string& proof) {
        // do something
        std::cout << "提交证据前的准备工作" << std::endl;
        _law_suit->submit(proof);
        std::cout << "善后工作" << std::endl;
        // do something
    };

private:
    std::shared_ptr<LawSuit> _law_suit;
};