// mycoroutine.cpp
#include "coroutine/coroutine.h"

MyCoroutine MyCoroutine::promise_type::get_return_object() {
    return MyCoroutine{std::coroutine_handle<promise_type>::from_promise(*this)};
}

std::suspend_never MyCoroutine::promise_type::initial_suspend() { return {}; }

std::suspend_always MyCoroutine::promise_type::final_suspend() noexcept { return {}; }

void MyCoroutine::promise_type::return_void() {}

void MyCoroutine::promise_type::unhandled_exception() { std::terminate(); }

MyCoroutine::MyCoroutine(std::coroutine_handle<promise_type> h) : handle(h) {}

MyCoroutine::~MyCoroutine() {
    if (handle) handle.destroy();
}

void MyCoroutine::resume() {
    if (handle && !handle.done()) handle.resume();
}

MyCoroutine foo() {
    std::cout << "Hello ";
    co_await std::suspend_always{};
    std::cout << "World!";
}
