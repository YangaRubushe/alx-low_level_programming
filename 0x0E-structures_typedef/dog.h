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

#endif /* DOG_H */
