//Template class for SinglyLinkedList
template <class T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) : data(data), next(nullptr) {}
};

template <class T>
class SinglyLinkedList {
private:
    Node <T>* head;
public:
    SinglyLinkedList() : head(nullptr) {}

    void push_back(T data) {
        Node <T>* newNode = new Node <T>(data);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node <T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void pop_back() {
        if (head == nullptr) {
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node <T>* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    void push_front(T data) {
        Node <T>* newNode = new Node <T>(data);
        newNode->next = head;
        head = newNode;
    }

    void pop_front() {
        if (head == nullptr) {
            return;
        }

        Node <T>* temp = head;
        head = head->next;
        delete temp;
    }

    void erase(T data) {
        if (head == nullptr) {
            return;
        }

        if (head->data == data) {
            Node <T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node <T>* current = head;
        while (current->next != nullptr && current->next->data != data) {
            current = current->next;
        }

        if (current->next == nullptr) {
            return;
        }

        Node <T>* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    void clear() {
        while (head != nullptr) {
            pop_front();
        }
    }

    bool find(T data) {
        Node <T>* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    friend std::ostream& operator << (std::ostream& os, const SinglyLinkedList <T>& list) {
        Node <T>* current = list.head;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next;
        }
        return os;
    }
};