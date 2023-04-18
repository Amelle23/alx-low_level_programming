#ifndef _DOG_
#define _DOG_

/**
 * dog_t - Typedef for struct dog
 * struct dog - it is used to sore details about the dogs
 * @name: name of pet
 * @age: age of pet
 * @owner: owner of pet
 * Description: struct willl be used here to inform us of the name, age and owner of the pet
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
