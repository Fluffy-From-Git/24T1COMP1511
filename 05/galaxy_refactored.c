// part1_galaxy.c
//
// This program was written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);
void initalise_galxy(struct celestial_body galaxy[SIZE][SIZE]);
void place_player(struct celestial_body galaxy[SIZE][SIZE]);
void place_planets_and_nebula(struct celestial_body galaxy[SIZE][SIZE]);
void place_stars(struct celestial_body galaxy[SIZE][SIZE]);
void print_galaxy_sum(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // Initialize the galaxy
    initalise_galxy(galaxy);

    // Place the player in the galaxy
    place_player(galaxy);

    // Place the planets and nebulae in the galaxy
    place_planets_and_nebula(galaxy);

    // Place the stars in the galaxy
    place_stars(galaxy);

    // Print the galaxy
    print_map(galaxy);

    // Print the sum of the points in the galaxy
    print_galaxy_sum(galaxy);
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}

// Function to initialize the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void initalise_galxy(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

// Function to place the player in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    int row, col;
    printf("Enter the starting position the player: ");
    scanf("%d %d", &row, &col);

    while (row != 0 && row != SIZE - 1 && col != 0 && col != SIZE - 1) {
        printf("Invalid player position!\n");
        printf("Please re-enter the starting position of the player: ");
        scanf("%d %d", &row, &col);
    }

    galaxy[row][col].entity = SPACESHIP;
    galaxy[row][col].points = 0;
}

// Function to place the planets and nebulae in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_planets_and_nebula(struct celestial_body galaxy[SIZE][SIZE]) {
    int row, col;
    printf("How many planets and nebulae are there? ");
    int count;
    int points;
    scanf("%d", &count);
    printf("Enter the position and points of the planet(s) and nebula(e): ");
    char type;
    for (int i = 0; i < count; i++) {
        scanf(" %c %d %d", &type, &row, &col);
        if (type == 'p') {
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (type == 'n') {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        galaxy[row][col].points = 0;
    }
}

// Function to print the sum of the points in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
// 
// returns: nothing
void print_galaxy_sum(struct celestial_body galaxy[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum += galaxy[i][j].points;
        }
    }
    printf("The total points in the galaxy is: %d\n", sum);
}

// Function to place the stars in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    int row, col, points;
    printf("Enter the position and points of the star(s): \n");
    while(scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
		galaxy[row][col].points = points;
    }
}
