#include "BaseHandle.h"

void BaseHandle::set_next(BaseHandle* handle) {
    if(handle != nullptr)
        _next_handle = handle;
}

void BaseHandle::handle(Request& req) {

}