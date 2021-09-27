#ifndef MYSTRUCT_H
#define MYSTRUCT_H
/**
 *struct dog - creating a dog struct
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif /* MYSTRUCT_H */
