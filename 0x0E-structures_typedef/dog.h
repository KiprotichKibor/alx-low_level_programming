#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * struct dog - short description
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;


#endif
