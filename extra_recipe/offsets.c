#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <sys/utsname.h>

#include "offsets.h"

uint64_t off1;
uint64_t off2;//OSData::getMetaClass
uint64_t off3;//OSSerializer::serialize
uint64_t off4;//RET
uint64_t off5;//uuid_copy

void load_offsets() {
    struct utsname u = { 0 };
    uname(&u);

    printf("sysname: %s\n", u.sysname);
    printf("nodename: %s\n", u.nodename);
    printf("release: %s\n", u.release);
    printf("version: %s\n", u.version);
    printf("machine: %s\n", u.machine);

    if (strcmp(u.version, "Darwin Kernel Version 16.3.0: Tue Nov 29 21:40:08 PST 2016; root:xnu-3789.32.1~4/RELEASE_ARM64_T7000") == 0) {
        off1 = 0xFFFFFFF007004000;
        off2 = 0xFFFFFFF0074446DC;
        off3 = 0xFFFFFFF00745B0DC;
        off4 = 0xFFFFFFF0074446E4;
        off5 = 0xFFFFFFF0074664F8;
    }
    else if (strcmp(u.version, "Darwin Kernel Version 16.3.0: Tue Nov 29 21:40:09 PST 2016; root:xnu-3789.32.1~4/RELEASE_ARM64_T7001") == 0) {
        off1 = 0xFFFFFFF007004000;
        off2 = 0xFFFFFFF007444900;
        off3 = 0xFFFFFFF00745B300;
        off4 = 0xFFFFFFF007444908;
        off5 = 0xFFFFFFF00746671C;
    }
    else {
        printf("device not supported");
    }
}
