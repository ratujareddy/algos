/* Ratuja Reddy
January 31

Refreshing my memory on C!!

Need some poinTERS ha HA HA 

Working on linked lists!


Mostly stolen from: https://www.geeksforgeeks.org/linked-list-set-1-introduction/
*/

#include <stdio.h> 
#include <stdlib.h>



typedef struct gghookups {
	char *name;
	struct gghookups *next;
} gghookups; 



void printList(gghookups *g) 
{ 
  while (g != NULL) 
  { 
    printf(" %s \n", g->name); 
  	//printf(g->name);
    g = g->next; 
  } 
} 


gghookups* search_gghookups(gghookups *g,  char* n)
{
	if (g == NULL) return(NULL);

	if (g->name == n)
		return(g);
	else
		return( search_gghookups(g->next, n) );
}


void insert_hookup(gghookups **g, char* n)
{
	gghookups *p;

	p = malloc(sizeof(gghookups));
	p->name = n;
	p->next = *g;
	*g = p;

}


int main()
{
	gghookups* blair = NULL;
	gghookups* nate = NULL;
	gghookups* vanessa = NULL;
	gghookups* dan = NULL;

	blair = (gghookups*)malloc(sizeof(gghookups));
	nate = (gghookups*)malloc(sizeof(gghookups));
	vanessa = (gghookups*)malloc(sizeof(gghookups));
	dan = (gghookups*)malloc(sizeof(gghookups));


	blair->name = "blair";
	blair->next = nate;

	nate->name = "nate";
	nate->next = vanessa;

	vanessa->name = "vanessa";
	vanessa->next = dan;

	dan->name = "dan";
	dan->next = NULL;

	printList(blair);

	printf("\n\n");
	gghookups* v = search_gghookups(blair, "vanessa");

	printList(v);

	// gghookups* chuck = NULL;

	// chuck = (gghookups*)malloc(sizeof(gghookups));

	insert_hookup(&blair, "chuck");
	printf("\n\n");

	printList(blair);



	return 0;

}