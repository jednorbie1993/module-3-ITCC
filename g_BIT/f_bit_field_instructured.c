#include <stdio.h>
#include <string.h>

struct emp_data {

    unsigned dental  : 1;
    unsigned college : 1;
    unsigned health  : 2;

    char fname[20];
    char lname[20];
};

int main() {

    struct emp_data worker;

    worker.dental = 1;
    worker.college = 0;
    worker.health = 2;

    strcpy(worker.fname, "Juan");
    strcpy(worker.lname, "Dela Cruz");

    printf("Name: %s %s\n", worker.fname, worker.lname);
    printf("Dental: %u\n", worker.dental);
    printf("College: %u\n", worker.college);
    printf("Health Plan: %u\n", worker.health);

    return 0;
}