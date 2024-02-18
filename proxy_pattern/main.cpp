#include "student.h"
#include "proxy_lawyer.h"

int main() {

    std::shared_ptr<LawSuit> stu = std::make_shared<Student>();
    std::shared_ptr<LawSuit> proxy_lawyer = std::make_shared<ProxyLawyer>(stu);
    std::string proof = "老板跑路";
    proxy_lawyer->submit(proof);

    return 0;
}