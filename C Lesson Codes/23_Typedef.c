#include <stdio.h>

typedef char name[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // no need to write => char name name1 = "Antariksh";
    name name1 = "Antariksh";

    // no need to write => struct User user1 = {"AamZindagi", "1234", 2468};

    User user1 = {"AamZindagi", "1234", 2468};
    User user2 = {"MentosZindagi", "2444", 44888888};

    printf("%s \n%s \n%d \n", user1.name, user1.password, user1.id);
    printf("\n");
    printf("%s \n%s \n%d \n", user2.name, user2.password, user2.id);

    return 0;
}