#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure holding details of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Holds a structure containing details of dogs
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;



void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
