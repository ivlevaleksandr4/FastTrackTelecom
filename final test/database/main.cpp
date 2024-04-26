#include <iostream>
#include <map>
#include <memory>

struct Student {
    int id;
    std::string name;
    int age;
};

class StudentDatabase {
public:
    StudentDatabase() = default;

    bool AddStudent(const std::shared_ptr <Student>& student);
    bool DeleteStudent(int id);

    std::pair <std::string, int> GetInfoById(int id);

private:
    std::map <int, std::shared_ptr <Student> > database;
};

bool StudentDatabase::AddStudent(const std::shared_ptr <Student>& student) {
    if (student.get() == nullptr) {
        return false;
    }

    int id = student->id;
    if (database.find(id) != database.end()) {
        return false;
    }

    database.emplace(student->id, student);
    return true;
}

bool StudentDatabase::DeleteStudent(int id) {
    if (database.find(id) == database.end()) {
        return false;
    }

    database.erase(id);
    return true;
}

std::pair <std::string, int> StudentDatabase::GetInfoById(int id) {
    if (database.find(id) == database.end()) {
        throw std::invalid_argument("Invalid id.");
    }
    else {
        std::shared_ptr<Student> student = database.find(id)->second;
        return std::make_pair(student->name, student->age);
    }
}

int main() {
    //some tests
    return 0;
}
