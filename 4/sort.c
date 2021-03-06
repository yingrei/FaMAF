/*
  @file sort.c
  @brief sort functions implementation
*/

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "helpers.h"
#include "sort.h"
#include "player.h"

bool goes_before(player_t x, player_t y){
    // completar aquí
    return (x->rank <= y->rank);
    
}

bool array_is_sorted(player_t atp[], unsigned int length) {
    unsigned int i = 1u;
    while (i < length && goes_before(atp[i - 1u], atp[i])) {
        i++;
    }
    return (i == length);
}


void swap(player_t *a,player_t *b){
    player_t *temp = a;
        *a=*b;
        *a=*temp;
}

void insert(player_t a[], unsigned int j){
    
    while((j>0) && (goes_before(a[j],a[j-1]))) {
        swap(&a, j-1,j);
        j--;
    }
}


void sort(player_t a[], unsigned int length) {
    // completar aquí
    for (unsigned int i=0u; i < length; i++){
        insert(a,i);
    }
}

