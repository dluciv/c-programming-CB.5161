#include <igraph.h>

int main(void) {

    igraph_t g;

    igraph_small(&g, 0, IGRAPH_DIRECTED, 0, 1, 1, 2, 2, 3, 3, 4, 6, 1, -1);
    igraph_write_graph_edgelist(&g, stdout);
    igraph_destroy(&g);

    return 0;
}
