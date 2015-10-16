//Supponi di avere un puntatore a un vector<vector<int>>
* vector<vector<int>> a;
//Devi fare cosi'
(*a)[i][j];
//con (*a) prendi il contenuto di a -> cioe' un vector<vector<int>> e poi accedi alla componente i,j
//Mi raccomando la parentesi (*a) perche' l'operatore * e' l'ultimo in ordine di priorita'
//Oppure, puoi anche scrivere
a->at(i)[j]
