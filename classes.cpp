#include <iostream>
#include <random>
/**
 * Difference between Class and Struct is
 *  - by default class member variables are private but public in case of Struct
 *
 * Similarities between Class and Struct
 *  - Both are same, the difference lies only in the scope of member variables
 *
 * Why struct are used or provided in C++ when Classes can be used?
 *  - To provide backward compatibility with C language
 *
 * What are classes?
 *  - They are definition of objects, they contain business logics, they do not
 * consume memory.
 *
 * What are Objects?
 *  - They are instances(example) of classes
 *
 * What are called or known as behaviours in classes?
 *  - The methods that are implemented with some business logics are known as
 * behaviours as they
 *  - change or introduce new behaviour to the objects
 */
class Book {
public:
  std::string title;
  static void init();

  void setTitle() { std::cin >> title; }

  void setAuthor() { std::cin >> author; }

  void generateId() {
    // Creating a random device
    std::random_device rd;

    // Creating a generator
    std::mt19937 gen(rd());

    // Creating a distribution
    std::uniform_int_distribution<> distr(1, 100);

    // Generate a random number in the range [1, 100]
    int randomNumber = distr(gen);
    id = randomNumber;
  }

  int getId() { return id; }

  std::string getAuthor() { return author; }
  /**
   * Function for getting title
   */
  std::string getTitle() { return this->title; }

private:
  int id{};
  std::string isbn;
  std::string author;
};

void Book::init() {
  std::cout << "Book is initialized." << std::endl;
}

int main() {
  Book b1;
  Book b2;

  b1.init();
  std::cout << "Enter Book Name: " << std::endl;
  b1.setTitle();
  std::cout << "Enter Book Author: " << std::endl;
  b1.setAuthor();
  b1.generateId();
  b1.getId();

  std::cout << "Book id is: " << b1.getId() << std::endl;
  std::cout << "Book name is: " << b1.getTitle() << std::endl;
  std::cout << "Book author is: " << b1.getAuthor() << std::endl;

  std::getwchar();
  return EXIT_SUCCESS;
}