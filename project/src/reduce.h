#ifndef REDUCE_H
#define REDUCE_H

#include "mpi.h"
#include "tree.h"
#include "types.h"
void get_global_map(int rank, int world_size, SupportMap *support_map,
                    hashmap_element **items_count, int *num_items,
                    int min_support);
void get_sorted_indices(int rank, int world_size, int *sorted_indices,
                        int start, int end, int length,
                        hashmap_element *items_count, int num_items);

void get_global_tree(int rank, int world_size, Tree *tree,
                     hashmap_element *items_count, int num_items,
                     int *sorted_indices);
MPI_Datatype define_datatype_hashmap_element();
MPI_Datatype define_datatype_tree_node();
#endif