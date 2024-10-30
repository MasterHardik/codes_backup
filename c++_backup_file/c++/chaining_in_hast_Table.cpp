

/*
 *              ** Cahining **
        Hash( key )= Key%7;
        key = { 50,21,58,17,15,49,56,22,23,25}

        we asign the index with the key and if
        some element collide then we add them also at same
        possition but through a linked list

        Hash Table ( Array of Linked List )

          * performing of chaining *
           M = no. of slots in Hash Table
           N = no. of keys to be inserted
             Load factor A(alpha) = n/m

                we want to be loat factor to be small
            if no. of slots will be high, then there is more chance of collisopn
        * Expected chain length - we don't know ,
                    worst case :  every key is inserted in same chain
          Expected chain lenght = A(alpha)

        * we cacn Ikplement Chaining be Linked List ,vector etc.


 */