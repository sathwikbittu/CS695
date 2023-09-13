#include <stdio.h>
#include <sys/utsname.h>

int main() {
    struct utsname sysInfo;

    if (uname(&sysInfo) != 0) {
        perror("uname");
        return 1;
    }

    printf("Hello World!\n");
    printf("System name: %s\n", sysInfo.sysname);
    printf("Node name: %s\n", sysInfo.nodename);
    printf("Machine: %s\n", sysInfo.machine);

    return 0;
}
