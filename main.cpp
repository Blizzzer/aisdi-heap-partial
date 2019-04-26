#include <iostream>
#include <vector>

using namespace std;

template<typename KeyType, typename ValueType>
class Heap4
{
public:
    using KeyValueType = pair<const KeyType, ValueType>;
    bool isEmpty() const {
        return heapArray.size() != 0;
    }

    void insert(KeyType const & key, ValueType const & value) {
        heapArray.push_back(make_pair(key, value));
        //add move up
    }

    void insert(KeyValueType const & key_value) {
        heapArray.push_back(key_value);
        //add move up
    }

    KeyValueType const & peek() const {
        return <#initializer#>;
    }
//    KeyValueType pop();
//    size_t size() const;
//    void print(std::ostream& stream) const;

private:
    vector<KeyValueType> heapArray;
};

int main() {
    cout << "Hello, World!" << endl;
    Heap4<int, int> heap;
    cout << heap.isEmpty() << endl;
    heap.insert(1, 1);
    cout << heap.isEmpty() << endl;

    return 0;
}