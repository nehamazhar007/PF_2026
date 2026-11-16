#include <stdio.h>
#include <string.h>

typedef struct movies {
    char title[50];
    char genre[20];
    char director[50];
    char releaseyear[15];
    int rating;
} movies;

int main() {
    movies m[50];
    int n, i;
    char search[20];

    printf("How many movies do you want to add? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n--- Enter Movie %d ---\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", m[i].title);
        printf("Genre: ");
        scanf(" %[^\n]", m[i].genre);
        printf("Director: ");
        scanf(" %[^\n]", m[i].director);
        printf("Release Year: ");
        scanf("%s", m[i].releaseyear);
        printf("Rating: ");
        scanf("%d", &m[i].rating);
    }

    printf("\n--- All Movie Details ---\n");
    for (i = 0; i < n; i++) {
        printf("%s | %s | %s | %s | Rating: %d\n",
               m[i].title, m[i].genre, m[i].director, m[i].releaseyear, m[i].rating);
    }

    printf("\nEnter genre to search: ");
    scanf(" %[^\n]", search);

    printf("\n--- Movies in '%s' Genre ---\n", search);
    for (i = 0; i < n; i++) {
        if (strcmp(m[i].genre, search) == 0) {
            printf("%s (Directed by %s, %s) - Rating: %d\n",
                   m[i].title, m[i].director, m[i].releaseyear, m[i].rating);
        }
    }

    return 0;
}
