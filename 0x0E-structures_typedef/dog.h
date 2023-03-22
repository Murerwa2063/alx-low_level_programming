#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This struct represents a dog with a name, owner, and age.
 * @name: name of the dog
 * @owner: Owner's name
 * @age: Age of the dog
 * Description: A struct called 'dog' that stores age, name and owner's name.
 */
typedef struct dog
{
	char *name;     /* The name of the dog */
	char *owner;    /* The name of the dog's owner */
	float age;      /* The age of the dog in years */
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
