#include <stdio.h>
#include <stdlib.h>

int i = 0;
void tower_hanoi(int disks, char from, char to, char aux)
{
    i++;
    if (disks == 1)
    {
        printf("\n%s %c %s %c", "Move the disk 1 from peg", from, "to peg", to);
        return;
    }

    tower_hanoi(disks - 1, from, aux, to);
    printf("\n%s %d %s %c %s %c", "Move the disk", disks, "from peg", from, "to peg", to);
    tower_hanoi(disks - 1, aux, to, from);
}

int main()
{
    int no_disks;
    char from = 'A', to = 'C', aux = 'B';
    printf("Enter the number of disks : ");
    scanf("%d", &no_disks);
    if (no_disks <= 0)
    {
        printf("Enter valid number : Error");
        exit(1);
    }
    tower_hanoi(no_disks, 'A', 'C', 'B');
    printf("\nThe total steps needed are : %d", i);
    return 0;
}
