#include <pwd.h>
#include <stdio.h>

int main() {
    struct passwd* entry = getpwent();
    while (entry != NULL) {
        printf("%s\n", entry->pw_name);
        entry = getpwent();
    }
}