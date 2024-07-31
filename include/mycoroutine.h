// mycoroutine.h
#ifndef MYCOROUTINE_H
#define MYCOROUTINE_H

#include <coroutine>
#include <iostream>

struct MyCoroutine {
    struct promise_type {
        MyCoroutine get_return_object();
        std::suspend_never initial_suspend();
        std::suspend_always final_suspend() noexcept;
        void return_void();
        void unhandled_exception();
    };

    std::coroutine_handle<promise_type> handle;

    MyCoroutine(std::coroutine_handle<promise_type> h);
    ~MyCoroutine();

    void resume();
};

MyCoroutine foo();

#endif // MYCOROUTINE_H
