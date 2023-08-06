#include <iostream>
#include <utility>

class HashMap {
private:
    int size{0};

    struct Node {
        std::string key;
        int data;
        Node *next;

        Node(std::string  key, int data) : key(std::move(key)), data(data), next(nullptr) {}
    };

    /**
     * HashIndex will be generated in the range of [[size]]
     * @param key
     * @return
     */
    [[nodiscard]] int generateHash(const std::string &key) const {
        int hashIndex = 0;
        for (char i: key) {
            hashIndex = (hashIndex + i * 23) % this->size;
        }
        return hashIndex;
    }

public:
    Node **HashMapTable{nullptr};

    explicit HashMap(int size) {
        this->size = size;
        this->HashMapTable = new Node *[this->size]{nullptr};
    }


    void insert(const std::string &key, int data) {
        int index = generateHash(key);
        Node *n = new Node(key, data);
        if (this->HashMapTable[index] == nullptr) {
            this->HashMapTable[index] = n;
            return;
        }

        Node *c = this->HashMapTable[index];
        while (c->next != nullptr) {
            c = c->next;
        }

        c->next = n;
    }

    int get(const std::string &key) {
        int index = this->generateHash(key);
        if (this->HashMapTable[index] == nullptr) {
            return -1;
        }
        Node *t = this->HashMapTable[index];

        while (t != nullptr) {

            if (t->key == key) {
                return t->data;
            }
            t = t->next;

        }
        return -1;
    }
};


int main() {
    HashMap hm(5);
    hm.insert("klop", 1);
    hm.insert("polk", 2);
    hm.insert("himanshu", 3);
    hm.insert("raj", 4);
    hm.insert("aman", 5);
    std::cout << hm.get("klop") << std::endl;
    std::cout << hm.get("polk") << std::endl;
    std::cout << hm.get("himanshu") << std::endl;
    std::cout << hm.get("raj") << std::endl;
    std::cout << hm.get("aman") << std::endl;
    std::cout << hm.get("adman") << std::endl;


    return EXIT_SUCCESS;
}