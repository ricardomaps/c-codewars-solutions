#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// "Preloaded Code" (do NOT modify!)
typedef struct node {
  int data;
  struct node *next;
} Node;

Node *parse(const char *string) {
  int n;
  if(strncmp(string, "NULL", 4) == 0) return NULL;
  Node *node = malloc(sizeof(Node));
  sscanf(string, "%d -> %n", &node->data, &n);
  node->next = parse(string + n);
  return node;
}
