#include <iostream>

/**
 * Structure is collection of similar and dissimilar elements
 *
 * Structure is a way to group variables
 *
 * Structure is a way to create data type
 * @return
 */

/**
 * Structure of book
 * Unlike C it can also contain functions
 */
struct BOOK {
  std::string isbn;
  std::string author;

  static void init();

private:
  int id = 0;
  std::string title;

public:
  /**
   * Function for getting title
   */
  std::string getTitle() { return this->title; }
  /**
   *
   * @param t
   * @return BOOK
   */
  void setTitle() { std::cin >> this->title; }
  /**
   * Function for getting Book ID
   */
  int getId() { return this->id; }
  /**
   * Setting book id
   * @param t
   * @return BOOK
   */
  void setId() { std::cin >> this->id; }
};

/**
 * Static function without object
 * @return
 */
void BOOK::init() { std::cout << "Book is initialized."; }

int main() {

  BOOK b1;
  BOOK::init();

  std::cout << "Enter Book Name: " << std::endl;
  b1.setTitle();
  std::cout << "Enter Book Id: " << std::endl;
  b1.setId();

  std::cout << "Book name is: " << b1.getTitle() << std::endl;
  std::cout << "Book id is: " << b1.getId() << std::endl;
}