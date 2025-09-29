# LINKED LIST

É uma lista de nodo ligados entre sí.

## Estrutura da Lista Ligada

The linked lists are basicaly made with:

1. Nodes

    - Store a value (data)
    - Reference/Pointing to the next node.

2. List (linked list):

    - References to the first node (head).
    - Optionaly, references to the last node (tail).
    - Store useful additional data, like list size (counter).

## Tipos de Lista

**Singly List**

Lista simples onde um nó sempre aponta para seu próximo nó, e o ultimo nó aponta para NULL

**Rotative List**

Lista Rotativa, onde um nó aponta para o seu próximo nó, e o último nó aponta para o primeiro, formando assim um ciclo

**Double List**

Lista Dupla onde cada nó possui aponta tanto para o próximo nó, quanto para o nó anterior, sendo o primeiro e ultimo nó tendo um ponteiro para NULL

**Double Rotative List**

Lista dupla rotativa, onde cada nó aponta tanto para o próximo, quanto para o nó anterior. O último nó aponta para o primeiro, e vice-versa.

## Operações

The operetaions are:

**Criate**
- Criate new node (new node)
- Criar new list (new)

**Insertion - adds a new element to the linked list.**
- Insert node at beginning (push front)
- Insert node at ending (push back)
- Insert node in arbitrary position (push at)

**Deletion - removes the existing elements.**
- Remove node at beginning (pop front)
- Remove node at ending (pop back)
- Remove node in arbitrary position (pop at)
- Remove all nodes (clear)

**Search - find a node in the linked list.**
- Find node by value (find by value)
- Find node by position (find by pos)
- Find node position by value (find pos)

**Sort - sort the nodes of the linked list.**
- Sorting (sort)

**Traversal - access each element of the linked list.**
- Iter list, applying a function (iter)
- Map list, getting a new modified one (map)
- Filter list, getting a filtered copy (filter)

**Utils - useful lists operations**
- Get size (size)
- Get node at position (node at)
