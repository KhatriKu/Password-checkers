#include <string>


class check{


public:
    void static check_password(std::string password);

private:
    static bool has_uppercase(std::string password);
    static bool has_lowercase(std::string password);
    static bool has_digit(std::string password);
    static bool has_special_char(std::string password);
    static int points;

};
