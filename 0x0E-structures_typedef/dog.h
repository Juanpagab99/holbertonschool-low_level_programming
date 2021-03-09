#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dogs information
 * @name: name
 * @age: age
 * @owner: owner
 * Description: information for Django
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_  */
