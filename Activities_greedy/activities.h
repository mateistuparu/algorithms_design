#ifndef ACTIVITIES_H_INCLUDED
#define ACTIVITIES_H_INCLUDED

typedef struct activities{
    int start;
    int finish;
    int duration;
};

void activities(struct activities *v, int n);


#endif
