#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog attribute
 * @name: The name of the dog name
 * @age: The age of the dog age
 * @owner: The owner of the dog owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
