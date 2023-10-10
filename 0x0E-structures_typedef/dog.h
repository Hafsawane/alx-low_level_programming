#define DOG_H
#ifndef DOG_H
/**
 * struct dog - the infos of the dog
 * @name : name of the dog
 * @age : the age of the dog
 * @owner : the owner of the dog
 */
struct dog
{
	char* name;
	float age;
	char* owner;
};
/* typedef of the struct dog*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
