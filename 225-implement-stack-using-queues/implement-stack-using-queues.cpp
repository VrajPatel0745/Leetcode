#include <queue>
using namespace std;

class MyStack {
    queue<int> inner;
    queue<int> outer;

public:
    MyStack() {}

    void push(int x) {
        inner.push(x);
    }

    int pop() {
        while(inner.size() > 1)
        {
            outer.push(inner.front());
            inner.pop();
        }

        int result = inner.front();
        inner.pop();

        swap(inner, outer);

        return result;
    }

    int top() {
        while(inner.size() > 1)
        {
            outer.push(inner.front());
            inner.pop();
        }

        int result = inner.front();
        outer.push(result);
        inner.pop();

        swap(inner, outer);

        return result;
    }

    bool empty() {
        return inner.empty();
    }
};