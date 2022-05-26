#include <stdio.h>
#include "Dados.h"

Job* Esvaziar(Job* jobs)
{
    if (jobs != NULL)
    {
        Esvaziar(jobs->left);
        Esvaziar(jobs->right);
        free(jobs);
    }
    return NULL;
}

Job* InserirJob(Job* jobs, int id)
{
    if (jobs == NULL)
    {
        jobs = malloc(sizeof(Job));
        jobs->id = id;
        jobs->left = jobs->right = NULL;
    }
    else if (id < jobs->id)
        jobs->left = InserirJob(jobs->left, id);
    else if (id > jobs->id)
        jobs->right = InserirJob(jobs->right, id);
    return jobs;
}


Job* Min(Job* jobs)
{
    if (jobs == NULL)
        return NULL;
    else if (jobs->left == NULL)
        return jobs;
    else
        return Min(jobs->left);
}

Job* Max(Job* jobs)
{
    if (jobs == NULL)
        return NULL;
    else if (jobs->right == NULL)
        return jobs;
    else
        return Max(jobs->right);
}

Job* Procurar(Job* jobs, int id)
{
    if (jobs == NULL)
        return NULL;
    else if (id < jobs->id)
        return Procurar(jobs->left, id);
    else if (id > jobs->id)
        return Procurar(jobs->right, id);
    else
        return jobs;
}

int Altura(Job* jobs)
{
    int lefth, righth;
    if (jobs == NULL)
        return -1;
    lefth = Altura(jobs->left);
    righth = Altura(jobs->right);
    return (lefth > righth ? lefth : righth) + 1;
}

Job* Apagar(Job* jobs, int id)
{
    Job* temp;
    if (jobs == NULL)
        return NULL;
    else if (id < jobs->id)
        jobs->left = Apagar(jobs->left, id);
    else if (id > jobs->id)
        jobs->right = Apagar(jobs->right, id);
    else if (jobs->left && jobs->right)
    {
        temp = Min(jobs->right);
        jobs->id = temp->id;
        jobs->right = Apagar(jobs->right, jobs->id);
    }
    else
    {
        temp = jobs;
        if (jobs->left == NULL)
            jobs = jobs->right;
        else if (jobs->right == NULL)
            jobs = jobs->left;
        free(temp);
    }
    return jobs;
}

void ListaJobs(Job* jobs)
{
    if (jobs == NULL)
        return;
    ListaJobs(jobs->left);
    printf("%d ", jobs->id);
    ListaJobs(jobs->right);
}
