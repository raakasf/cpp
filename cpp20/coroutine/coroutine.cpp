#include <coroutine>
#include <iostream>
#include <optional>

struct MyCoroutine {
    struct promise_type {
        MyCoroutine get_return_object() {
            return MyCoroutine{
                std::coroutine_handle<promise_type>::from_promise(*this)
            };
        }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle<promise_type> handle;

    MyCoroutine(std::coroutine_handle<promise_type> h) : handle(h) {}
    ~MyCoroutine() { 
        if (handle) handle.destroy(); 
    }

    void resume() { 
        if (handle && !handle.done()) handle.resume(); 
    }
};

MyCoroutine foo() {
    std::cout << "Hello ";
    co_await std::suspend_always{};
    std::cout << "World!";
}

int main() {
    auto c = foo();
    c.resume(); // Prints "Hello "
    c.resume(); // Prints "World!"
    return 0;
}
