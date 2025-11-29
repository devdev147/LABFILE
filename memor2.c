#include <stdio.h>
#include <stdlib.h>

struct N{int d; struct N* n;};

int main(){
    struct N *a=malloc(sizeof(struct N)),
             *b=malloc(sizeof(struct N)),
             *c=malloc(sizeof(struct N)),
             *m;

    a->d=10; a->n=b;
    b->d=20; b->n=c;
    c->d=30; c->n=NULL;

    m=malloc(sizeof(struct N));
    m->d=15;
    m->n=b;      // insert after 'a'
    a->n=m;

    for(struct N*t=a;t;t=t->n) printf("%d->",t->d);
    
    printf("NULL\n");
    return 0;
}