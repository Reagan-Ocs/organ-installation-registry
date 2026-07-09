/*Design and implement a command-line utility in C that calculates and
tracks the expiration dates of patients using high-performance cybernetic
implants. Because these implants put extreme strain on the human nervous system,
they have a strict, hard-coded 13-year operational limit. The program will calculate
the user's terminal year, determine the exact time remaining relative to the current year
(2026), and generate a diagnostic biological status report.*/
#include <stdio.h>
char patientName[100];
int yearInstalled;
int expirationYear;
int currentYear;
int timeRemaining;
char bioStatus;
int main()
{
    printf("== = CYBERNETICS DIAGNOSTICS == =\n");
    printf("Scanning host integration data...\n");
    printf("Enter patient's name: ");
    scanf("%s", patientName);
    printf("Enter your year of implant installation: \n");
    scanf("%d", &yearInstalled);
    printf("Enter the current year: \n");
    scanf("%d", &currentYear);
    printf("-- -DIAGNOSTIC REPORT : %s-- -\n", patientName);

    expirationYear = yearInstalled + 13;
    timeRemaining = expirationYear - currentYear;
    printf("                       Installation Year: %d Expiration Year: %d\n", yearInstalled, expirationYear);

    printf("                       System Timeline: %d years remaining.\n", timeRemaining);
    printf("                       Biostatus Check: ");

    if (timeRemaining > 10)
    {
        printf("Peak.\n");
    }
    else if (timeRemaining > 5)
    {
        printf("Stable.\n");
    }
    else
    {
        printf("Critical.\n");
    }

    printf("                       Micro-cellular degradation detected.Mild biological fatigue.-- -- -- -- -- -- -- -- -- -- -- -- -- -- --");

    return 0;
}