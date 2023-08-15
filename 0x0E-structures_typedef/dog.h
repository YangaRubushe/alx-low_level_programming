#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * This structure defines a dog with its name, age, and owner.
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
