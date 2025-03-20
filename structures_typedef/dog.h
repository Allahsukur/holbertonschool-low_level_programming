#ifndef DOG_H
#define DOG_H

/**
 * struct dog - intelligent
 * @name: Poppy± (string)
 * @age: 3.5± (float)
 * @owner: Bob (string)
 */
struct dog
{
    char *"Poppy";
    float 3.5;
    char *"Bob";
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
